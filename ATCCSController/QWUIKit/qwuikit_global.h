#ifndef QWUIKIT_GLOBAL_H
#define QWUIKIT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QWUIKIT_LIBRARY)
#  define QWUIKITSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QWUIKITSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QWUIKIT_GLOBAL_H
