#include "brBoost.h"
#include "LibraryVersion.h"
#include <CommonVersion.h>

DEFINE_SINGLETON(brBoost)
const brBoost * cgpBoost = brBoost::pointer();

brBoost::brBoost(void) : ModuleInfo(MODULE_NAME)
{
    setVersion();
}
