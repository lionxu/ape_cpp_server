#ifndef _ZAMPLUS_MONITOR_LOG_HELPER_H_
#define _ZAMPLUS_MONITOR_LOG_HELPER_H_

#include "LogManager.h"

const int BUSINESS_MODULE = 102;
DEFINE_MODULE_XLOG(BUSINESS_MODULE, BS_XLOG)
#define BS_SLOG(Level,Event) SLOG(BUSINESS_MODULE,Level,Event)

const int SELF_CHECK_MODULE = 91;
DEFINE_MODULE_XLOG(SELF_CHECK_MODULE,SELF_CHECK_XLOG)
#endif

