#ifndef BRVAR_GLOBAL_H
#define BRVAR_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BRVAR_LIBRARY)
#  define BRVARSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BRVARSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BRVAR_GLOBAL_H
