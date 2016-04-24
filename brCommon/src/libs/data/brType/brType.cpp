#include "brType.h"

#include "LibraryVersion.h"
#include <CommonVersion.h>

DEFINE_SINGLETON(brType)
const brType * cgpType = brType::pointer();

brType::brType(void) : ModuleInfo(MODULE_NAME)
{
    setVersion();
}
