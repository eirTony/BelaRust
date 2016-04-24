#ifndef BRSTONE_GLOBAL_H
#define BRSTONE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BRSTONE_LIBRARY)
#  define BRSTONESHARED_EXPORT Q_DECL_EXPORT
#else
#  define BRSTONESHARED_EXPORT Q_DECL_IMPORT
#endif

#ifndef MODULE_NAME
#  define MODULE_NAME "brStone"
#endif

#endif // BRSTONE_GLOBAL_H
