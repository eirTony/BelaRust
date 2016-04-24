#ifndef BRBOOST_H
#define BRBOOST_H

#include "brboost_global.h"

#include <brBase/ModuleInfo.h>
#include <brType/Singleton.h>

class BRBOOSTSHARED_EXPORT brBoost : public ModuleInfo
{
    DECLARE_SINGLETON(brBoost)
};

#endif // BRBOOST_H
