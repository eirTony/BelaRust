#ifndef BRTYPE_H
#define BRTYPE_H

#include "brtype_global.h"

#include <brBase/ModuleInfo.h>
#include "Singleton.h"

class BRTYPESHARED_EXPORT brType : public ModuleInfo
{
DECLARE_SINGLETON(brType)
};

#endif // BRTYPE_H
