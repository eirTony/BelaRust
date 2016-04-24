/*! @file   BasicId.cpp BaseLib BasicId class definitions
 */

#include "BasicId.h"

#include <QChar>
#include <QString>

const QChar BasicId::csmDelimChar('/');


BasicId::BasicId(void) {;}

BasicId::BasicId(const BasicName & firstName,
                 const BasicName & secondName,
                 const BasicName & thirdName,
                 const BasicName & fourthName)
{
    mNameList.clear();
    mNameList.append(firstName);
    if ( ! secondName.isNull()) mNameList.append(secondName);
    if ( ! thirdName.isNull())  mNameList.append(thirdName);
    if ( ! fourthName.isNull()) mNameList.append(fourthName);
}


BasicId::BasicId(const QString & string)
{
    set(string);
}

BasicId::BasicId(const char * const chars)
{
    set(QString::fromLocal8Bit(chars));
}

// private
BasicId::BasicId(const BasicNameList &otherList)
    : mNameList(otherList) {;}

void BasicId::set(const QString & string)
{
    mNameList.clear();
    QStringList qsl(string.simplified().split(csmDelimChar));
    foreach (QString s, qsl)
        mNameList.append(s);
}

QString BasicId::toString(const QChar separator) const
{
    return toString(mNameList, separator);
}

// static
QString BasicId::toString(const BasicNameList & nameList,
                          QChar separator)
{
    QString result;
    if (separator.isNull()) separator = csmDelimChar;
    foreach (BasicName n, nameList)
        result += (result.isEmpty()
                   ? QString()
                   : QString(separator)) + QString(n);
    return result;
}

QString BasicId::operator () (void) const
{
    return toString();
}

BasicId::operator QString (void) const
{
    return toString();
}

BasicName BasicId::at(const int index) const
{
    return (index >= 0 && index < size())
            ? mNameList.at(index)
            : BasicName();
}

BasicName BasicId::name(void) const
{
    return mNameList.last();
}

BasicId BasicId::parent(void) const
{
    BasicNameList resultNameList = mNameList;
    (void)resultNameList.takeLast();
    return resultNameList;
}

int BasicId::size(void) const
{
    return mNameList.size();
}

bool BasicId::isNull(void) const
{
    return mNameList.isEmpty();
}

bool BasicId::operator < (const BasicId & rhs) const
{
    return toString() < rhs.toString();
}

bool BasicId::operator == (const BasicId & rhs) const
{
    return toString() == rhs.toString();
}

BasicId & BasicId::operator += (const BasicName name)
{
    mNameList.append(name);
    return *this;
}
