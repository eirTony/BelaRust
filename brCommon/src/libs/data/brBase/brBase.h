#ifndef BRBASE_H
#define BRBASE_H
#include "brbase_global.h"

#include "ModuleInfo.h"

#include <brType/Singleton.h>

class BRBASESHARED_EXPORT brBase : public ModuleInfo
{
    DECLARE_SINGLETON(brBase) // ctor & more
};

#endif // BRBASE_H
