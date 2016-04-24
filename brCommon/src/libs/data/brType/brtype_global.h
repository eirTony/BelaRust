#ifndef BRTYPE_GLOBAL_H
#define BRTYPE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BRTYPE_LIBRARY)
#  define BRTYPESHARED_EXPORT Q_DECL_EXPORT
#else
#  define BRTYPESHARED_EXPORT Q_DECL_IMPORT
#endif

#ifndef MODULE_NAME
#  define MODULE_NAME "brType"
#endif

#endif // BRTYPE_GLOBAL_H
