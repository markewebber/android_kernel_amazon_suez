/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef __MT_MEMORY_H__
#define __MT_MEMORY_H__

/*
 * Define macros.
 */

/* IO_VIRT = 0xF0000000 | IO_PHYS[27:0] */
#define IO_VIRT_TO_PHYS(v) (0x10000000 | ((v) & 0x0fffffff))
#define IO_PHYS_TO_VIRT(p) (0xf0000000 | ((p) & 0x0fffffff))
#ifndef CONFIG_MTK_LM_MODE
#ifndef __ASSEMBLER__
static inline unsigned int enable_4G(void)
{
	return 0;
}
#endif
#endif
#endif  /* !__MT_MEMORY_H__ */
