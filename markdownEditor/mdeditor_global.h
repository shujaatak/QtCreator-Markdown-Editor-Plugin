#ifndef MDEDITOR_GLOBAL_H
#define MDEDITOR_GLOBAL_H

#include <QtGlobal>

#if defined(SOPCONFIG_LIBRARY)
#  define MDEDITORSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MDEDITORSHARED_EXPORT Q_DECL_IMPORT
#endif


#endif // MDEDITOR_GLOBAL_H

