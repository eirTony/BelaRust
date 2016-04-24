#include "MetaTypeName.h"

MetaTypeName::MetaTypeName(void) {;}

MetaTypeName::MetaTypeName(const char * chars)
    : mChars(chars) {;}

MetaTypeName::MetaTypeName(const QString & string)
    : mChars(string.toLocal8Bit()) {;}

bool MetaTypeName::isEmpty(void) const
{
    return mChars.isEmpty();
}

void MetaTypeName::set(const QString & string)
{
    mChars.clear();
    mChars.append(string);
}

const char * MetaTypeName::name(void) const
{
    return mChars.constData();
}

MetaTypeName::operator const char * (void) const
{
    return name();
}
