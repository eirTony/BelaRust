#ifndef BRLOG_H
#define BRLOG_H
#include "brlog_global.h"

#if 0 // *BUST* Try without ModuleInfo so can be below brBase

#include <brType/Singleton.h>

class BRLOGSHARED_EXPORT brLog
{
    DECLARE_SINGLETON(brLog)
};

#else

#include <brBase/ModuleInfo.h>
#include <brType/Singleton.h>

class BRLOGSHARED_EXPORT brLog : public ModuleInfo
{
    DECLARE_SINGLETON(brLog)
};

#endif // *BUST*

#endif // BRLOG_H
