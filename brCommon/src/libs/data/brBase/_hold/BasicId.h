/*! @file   BasicId.h   BaseLib: BasicId declaration
 */
#ifndef BASICID_H
#define BASICID_H
#include "BaseLib.h"

#include <QList>
#include <QMap>
#include <QString>
#include <QVariant>

#include "BasicName.h"

class BASESHARED_EXPORT BasicId
{
public:
    typedef QList<BasicId> List;
    typedef QMap<BasicId, QVariant> VariantMap;

public:
    BasicId(void);
    BasicId(const BasicName & firstName,
            const BasicName & secondName=BasicName(),
            const BasicName & thirdName=BasicName(),
            const BasicName & fourthName=BasicName());
    BasicId(const QString & string);
    BasicId(const char * const chars);

    void set(const QString & string);
    QString toString(const QChar separator=QChar()) const;
    QString operator () (void) const;
    operator QString (void) const;
    BasicName at(const int index) const;
    BasicName name(void) const;
    BasicId parent(void) const;
    int size(void) const;
    bool isNull(void) const;
    bool operator <  (const BasicId & rhs) const;
    bool operator == (const BasicId & rhs) const;
    BasicId & operator += (const BasicName name);

private:
    BasicId(const BasicNameList & otherList);

private: // static
    static QString toString (const BasicNameList &nameList,
                             QChar separator=QChar());

private:
    const static QChar csmDelimChar;
    BasicNameList mNameList;
};
/*! @class BasicId <core/BasicId.h.
 * @brief BasicId class provides a multipart identification string
 * @since BasicId was strted in v2.02
 * @ingroup BaseLib
 * @sa BasicName
 * @sa BasicKey
 *
 * BasicId instances are a sequence of BasicName instances separated
 * by a '/' segment delimtor.
 */
Q_DECLARE_TYPEINFO(BasicId, Q_PRIMITIVE_TYPE);
//Q_DECLARE_SHARED(BasicId)

typedef BasicId::VariantMap BasicIdVariantMap;

#endif // BASICID_H
