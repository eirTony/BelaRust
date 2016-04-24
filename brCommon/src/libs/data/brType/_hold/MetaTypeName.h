#ifndef METATYPENAME_H
#define METATYPENAME_H
#include "TypeLib.h"

#include <QByteArray>

class TYPESHARED_EXPORT MetaTypeName
{
public:
    MetaTypeName(void);
    MetaTypeName(const char * chars);
    MetaTypeName(const QString & string);
    // not exlicit for easy construction from string

    bool isEmpty(void) const;
    void set(const QString & string);

    const char * name(void) const;
    operator const char * (void) const;

private:
    QByteArray mChars;
};

#endif // METATYPENAME_H
