#if !defined(_LINUX_XLOG_H)
#define _LINUX_XLOG_H

#include <linux/linkage.h>
#include <linux/log_priority.h>

#define LOGGER_ALE_ARGS_MAX 16

struct ale_convert {
	const char *tag_str;
	const char *fmt_ptr;
	const char *filename;
	int lineno;

	unsigned int hash;
	char params[LOGGER_ALE_ARGS_MAX];
};

struct xlog_record {
	const char *tag_str;
	const char *fmt_str;
	int prio;
};

#if defined(HAVE_ALE_FEATURE)

int __xlog_ale_printk(int prio, const struct ale_convert *convert, ...);

#define xlog_printk(prio, tag, fmt, ...)				\
  ({									\
	  static const struct ale_convert ____xlogk_ale_rec____ =	\
	      { tag, fmt, __FILE__, prio, 0, "" };                      \
	  __xlog_ale_printk(prio, &____xlogk_ale_rec____,		\
			    ##__VA_ARGS__);				\
  })

#else				/* HAVE_ALE_FEATURE */

asmlinkage int __xlog_printk(const struct xlog_record *rec, ...);

int __xlog_ksystem_printk(const struct xlog_record *rec, ...);
#ifdef CONFIG_HAVE_XLOG_FEATURE
#define xlog_printk(prio, tag, fmt, ...)				\
	({								\
		static const struct xlog_record _xlog_rec =		\
			{tag, fmt, prio};				\
		__xlog_printk(&_xlog_rec, ##__VA_ARGS__);		\
	})
#define xlog_ksystem_printk(prio, tag, fmt, ...)			\
	({								\
		static const struct xlog_record _xlog_rec =		\
			{tag, fmt, prio};				\
		__xlog_ksystem_printk(&_xlog_rec, ##__VA_ARGS__);	\
	})
#else				/* CONFIG_HAVE_XLOG_FEATURE */
#define xlog_printk(prio, tag, fmt, ...) ((void)0)
#define xlog_ksystem_printk(prio, tag, fmt, ...)    ((void)0)
#endif				/* CONFIG_HAVE_XLOG_FEATURE */
#endif				/* HAVE_ALE_FEATURE */

#endif
