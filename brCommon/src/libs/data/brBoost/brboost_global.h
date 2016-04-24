#ifndef BRBOOST_GLOBAL_H
#define BRBOOST_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BRBOOST_LIBRARY)
#  define BRBOOSTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BRBOOSTSHARED_EXPORT Q_DECL_IMPORT
#endif

#ifndef MODULE_NAME
#  define MODULE_NAME "brBoost"
#endif

#endif // BRBOOST_GLOBAL_H
