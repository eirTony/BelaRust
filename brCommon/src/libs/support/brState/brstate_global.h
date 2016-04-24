#ifndef BRSTATE_GLOBAL_H
#define BRSTATE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BRSTATE_LIBRARY)
#  define BRSTATESHARED_EXPORT Q_DECL_EXPORT
#else
#  define BRSTATESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BRSTATE_GLOBAL_H
