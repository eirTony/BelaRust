#ifndef BRBASE_GLOBAL_H
#define BRBASE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BRBASE_LIBRARY)
#  define BRBASESHARED_EXPORT Q_DECL_EXPORT
#else
#  define BRBASESHARED_EXPORT Q_DECL_IMPORT
#endif

#ifndef MODULE_NAME
#define MODULE_NAME "brBase"
#endif

#endif // BRBASE_GLOBAL_H
