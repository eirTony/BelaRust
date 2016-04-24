#include "brStone.h"

#include "LibraryVersion.h"
#include <CommonVersion.h>

DEFINE_SINGLETON(brStone)
const brStone * cgpStone = brStone::pointer();

brStone::brStone()
{
    setVersion();
}
