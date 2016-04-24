#ifndef BREXE_GLOBAL_H
#define BREXE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BREXE_LIBRARY)
#  define BREXESHARED_EXPORT Q_DECL_EXPORT
#else
#  define BREXESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BREXE_GLOBAL_H
