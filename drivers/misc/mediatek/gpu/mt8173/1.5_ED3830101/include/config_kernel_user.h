/*
 * Copyright (c) 2014 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#define SUPPORT_ION
#define PVR_ANDROID_ION_HEADER "../drivers/staging/android/ion/ion.h"
#define PVR_ANDROID_ION_PRIV_HEADER "../drivers/staging/android/ion/ion_priv.h"
#define PVR_ANDROID_ION_USE_SG_LENGTH
#define PVR_ANDROID_SYNC_HEADER "../drivers/staging/android/sync.h"
#define LINUX
#define PVR_BUILD_DIR "mt8173"
#define PVR_BUILD_TYPE "release"
#define PVRSRV_MODNAME "pvrsrvkm"
#define SUPPORT_RGX 1
#define RELEASE
#define DEBUG_BRIDGE_KM
#define RGX_BVNC_CORE_KM_HEADER "cores/rgxcore_km_4.40.2.51.h"
#define RGX_BVNC_CORE_HEADER "cores/rgxcore_4.40.2.51.h"
#define RGX_BNC_CONFIG_KM_HEADER "configs/rgxconfig_km_4.V.2.51.h"
#define RGX_BNC_CONFIG_HEADER "configs/rgxconfig_4.V.2.51.h"
#define SUPPORT_DBGDRV_EVENT_OBJECTS
#define SYS_USING_INTERRUPTS
#define PVRSRV_NEED_PVR_DPF
#define CACHEFLUSH_TYPE CACHEFLUSH_GENERIC
#define SUPPORT_SECURE_EXPORT
#define SUPPORT_GPUTRACE_EVENTS
#define GPUVIRT_VALIDATION_NUM_OS 8
#define FIX_DUSTS_POW_ON_INIT
#define SUPPORT_LINUX_X86_WRITECOMBINE
#define SUPPORT_LINUX_X86_PAT
#define PVR_LINUX_USING_WORKQUEUES
#define PVR_LINUX_MISR_USING_PRIVATE_WORKQUEUE
#define PVR_LINUX_TIMERS_USING_WORKQUEUES
#define PVR_LDM_DRIVER_REGISTRATION_NAME "pvrsrvkm"
#define LDM_PLATFORM
#define PVRSRV_FULL_SYNC_TRACKING_HISTORY_LEN 256
#define SUPPORT_PERCONTEXT_FREELIST
#define PVRSRV_ENABLE_PROCESS_STATS
#define SUPPORT_PAGE_FAULT_DEBUG
#define PVRSRV_ENABLE_MEMTRACK_STATS_FILE
#define PVR_LINUX_PHYSMEM_MAX_POOL_PAGES 10240
#define PVR_LINUX_ARM_PAGEALLOC_FLUSH_THRESHOLD  256
#define PVR_LINUX_PHYSMEM_MIN_NUM_PAGES  256
#define PVR_LINUX_PHYSMEM_MAX_ALLOC_ORDER  2
#define PVR_LINUX_KMALLOC_ALLOCATION_THRESHOLD  16384
#define ANDROID
#define SUPPORT_NATIVE_FENCE_SYNC
#define PVR_LDM_PLATFORM_PRE_REGISTERED
#define MTK_ENABLE_SWAPM
#define MTK_ENABLE_HWAPM
#define MTK_GPU_DVFS
