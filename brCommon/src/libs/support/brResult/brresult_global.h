#ifndef BRRESULT_GLOBAL_H
#define BRRESULT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BRRESULT_LIBRARY)
#  define BRRESULTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BRRESULTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BRRESULT_GLOBAL_H