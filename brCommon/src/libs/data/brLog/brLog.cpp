#include "brLog.h"

#include "LibraryVersion.h"
#include <CommonVersion.h>

#if 0 // *BUST* Try without ModuleInfo so can be below brBase

brLog::brLog(void) {;}

#else

brLog::brLog(void) : ModuleInfo(MODULE_NAME)
{
    setVersion();
}

#endif // *BUST*
