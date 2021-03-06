// x_system_cpu.h - System CPU information
#ifndef __XCORE_SYSTEM_CPU_H__
#define __XCORE_SYSTEM_CPU_H__
#include "xbase/x_target.h"
#ifdef USE_PRAGMA_ONCE
#pragma once
#endif

namespace xcore
{
	class xcpu_info
	{
		static void			initialize();
		
		static s32			getPhysicalProcessors ();
		static s32			getLogicalProcessorsPerPhysical ();

	};
}

#endif	///< __XCORE_SYSTEM_CPU_H__
