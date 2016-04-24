#include "brBase.h"

#include "LibraryVersion.h"
#include <CommonVersion.h>

DEFINE_SINGLETON(brBase)
const brBase * cgpBase = brBase::pointer();

brBase::brBase(void) : ModuleInfo(MODULE_NAME)
{
    setVersion();
}
