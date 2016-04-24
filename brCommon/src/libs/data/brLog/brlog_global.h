#ifndef BRLOG_GLOBAL_H
#define BRLOG_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BRLOG_LIBRARY)
#  define BRLOGSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BRLOGSHARED_EXPORT Q_DECL_IMPORT
#endif

#ifndef MODULE_NAME
#  define MODULE_NAME "brLog"
#endif

#endif // BRLOG_GLOBAL_H
