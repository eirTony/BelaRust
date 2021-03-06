#ifndef VARIABLESET_H
#define VARIABLESET_H

#include <QByteArray>
#include <QSharedDataPointer>

#include <eirBase/DataProperty.h>
#include <eirType/MillisecondTime.h>
#include <eirKid/KeyClass.h>
#include <eirKID/UniversalKey.h>

#include "Variable.h"
#include "VariableMap.h"

#define VARIABLESET_DATAPROPS(TND) \
    TND(MillisecondTime, TimeStamp, MillisecondTime()) \
    TND(UniversalKey, Key, UniversalKey()) \
    TND(VariableId, Id, VariableId()) \
    TND(QString, Name, QString()) \
    TND(VariableMap, Map, VariableMap()) \
    TND(QQVariantList, List, QQVariantList()) \
    TND(QByteArray, Binary, QByteArray()) \

class VariableSetData : public QSharedData
{
    DECLARE_CHILD_DATAPROPS(VARIABLESET_DATAPROPS)
public:
    VariableSetData(void)
    {
        DEFINE_DATAPROPS_CTORS(VARIABLESET_DATAPROPS)
    }
};

/*! @class VariableSet The VariableSet class contains three pieces of data identified by a key and id.
  *
  * VariableSet is a core part of the EclipseIR libraries.
  * Many of the support, interface, and data transfer mechanisms will be based upon or
  * will make use of VariableSet.
  *
  * @section Id Identification
  *
  * The INDIbase system is based upon a set of unique numeric keys and unique string
  * ids within a key type. The VariableSet is identified by a dbKey() (INDIbase unique database key)
  * a 64-bit key() that can be translated to a particular key class and type, and
  * a string id(). It also has a name() string that can be used to identify its contents.
  * These values can be set by setDbKey(), setKey(), setId(), and setName()
  * and retrieve with dbKey(), key(), id(), and name().
  *
  * @section Data Data
  *
  * VariableSet contains three data elements.
  *     # A map of Variable (essentially a named QVariant) elements
  *     # A list of QVariant
  *     # A QByteArray for pure binary data
  *
  * The isNull() function returns true only if <i> all </i> three are empty.
  *
  * @subsection Map Variable Map
  *
  * Variable items can be added to the map with
  * set(const VariableId & vid, const QVariant & var) or
  * set(const Variable & vbl).
  * They can be retrived from the list with
  * at(const VariableId & vid) (returning a Variable) or
  * value(const VariabkeId & vid) (returning the contained QVariant).
  *
  * @subsection List QVariantList
  *
  * Item can be added to the list with append(const QVariant & var)
  * and prepent(const QVariant & var).
  * They can be retrieved with at(const int index).
  *
  * @subsection ba QByteArray
  *
  * The binary data is set with set(const QByteArray & ba)
  * and retrieved by binary(void).
  *
  * @section Usage Usage
  *
  * Derived classes can preset Variable values in the map.
  * To do so, add the following to the header and implementation files.
  *
  * @subsection hFile Derived .h file
  *
  * @code
#include "../eirCore/VariableSet.h"


#define DERIVED_VARIABLESET(TIVD) \
    TIVD(int, Sequence, int, 0) \
    TIVD(QString, Mode, QString, QString()) \

class EIRSDK1SHARED_EXPORT Derived : public VariableSet
{
public:
    DECLARE_VARIABLESET(DERIVED_VARIABLESET);
    Derived(void);
}
  * @endcode
  *
  * In the TIVD definition there are four elements:
  * @arg typename of the external values
  * @arg name of the value; void setName(typename v) and typename getName(void) const will be defined
  * @arg QVariant type stored in the map
  * @arg QVariant default value
  *
  * @subsection cppFile Derived .cpp file
  *
  * @code
#include "Derived.h"

Derived::Derived(void)
    : VariableSet("Derived")
{
    DEFINE_VARIABLESET_CTORS(DERIVED_VARIABLESET);
}
  * @endcode
  *
  * @subsection Derivitives Derivitive Classes
  *
  * Three major base classes will be derived from class VariableSet:
  *
  * class ConfigurationBase will then be subclassed to contain
  * configuration variables for individual worker classes.
  * It will interface with the user via .INI files or
  * Windows Registry, for example.
  *
  * class MessageBase will then be subclassed to envelop
  * messages sent between processes in the INDI network.
  *
  * class EntityBase will then be subclassed to contain
  * entities to be stored in an INDIbase database or
  * INDImage image management server.
  *
  * @subsection Interfaces External Interfaces
  *
  * Several interfaces will be developed for class VariableSet
  * to interface with configurations, messages, and database
  * entities:
  *
  * * .INI file
  * * Windows Registry
  * * .XML files / QDomElement's
  * * JSON / BSON
  * * QBinaryStream
  * * QTextStream
  *
  * Each derivitive class will be able to use these interfaces.
  *
  * @subsection QVariant QVariant Interface
  *
  * Every class VariableSet and derivative will have a
  * QMetaType declared so that they can be carried in
  * a QVariant.
  *
  * This will also promote class VariableSet's embedding in
  * and extracted from other class VariableSet's.
  *
  * @todo Explore an EightCC signature to help identify
  *         the meta type of a class VariableSet.
  *
  * @todo class VariableSetBinaryBuffer : QByteArray
  *         c'tor(const VariableSet & vset)
  *         c'tor(const QByteArray & prefix, const VariableSet & vset)
  * @todo class VariableSetTextBuffer : QByteArray
  *
  * @todo QVariant VariableSet::toVariant(void)
  *         { return QVariant(VariableSetBinaryBuffer(var_prefix_ba, *this)); }
  *         explore QVariant c'tors source code
  *
  * @todo   VariableSet::c'tor(const QVariant & vsbb_var);
  *
  * @todo class BinaryMessage
  *         c'tor(const MessageHeader & header, const MessageBase & message);
  *             : VariableSetBinaryBuffer(header.toByteArray, message)
  *             { setTotalBytes(QByteArray::size(); }
  *
  */
class EIRVARSHARED_EXPORT VariableSet
{
    DECLARE_PARENT_DATAPROPS(VARIABLESET_DATAPROPS)
    DECLARE_DATAPROPS(VariableSet, VariableSetData)

public:
    VariableSet(const KeyClass keyClass,
                const VariableId & id,
                const QString name=QString());

    bool isNull(void) const;
    bool isEmpty(void) const;
    void clear(void);
    void reset(void);
    int binarySize(void) const;
    int listSize(void) const;
    int mapSize(void) const;
    bool contains(const VariableId & vid) const;
    void set(const QQVariantList &vl);
    void set(const Variable & vbl);
    void set(const VariableId & vid,
             const QQVariant & value);
    void set(const int index,
             const QQVariant &value);
    void set(const QByteArray & ba);
    void reset(const VariableId & id);
    void append(const QQVariant & value);
    Variable at(const VariableId & id) const;
    QQVariant value(const VariableId & id,
                   const QQVariant &defaultValue=QQVariant()) const;
    QQVariant value(const int index) const;
    QByteArray value(void) const;
    QQVariantList values(void) const;
    VariableSet extract(const VariableId & sectionId) const;
    VariableIdList sectionIds(const VariableId & within=VariableId()) const;
    VariableIdList ids(const VariableId & within=VariableId()) const;
    void implant(const VariableSet & other,
                 const VariableId & sectionId=VariableId());
    QList<Variable> all(void) const;
};
Q_DECLARE_TYPEINFO(VariableSet, Q_PRIMITIVE_TYPE);
Q_DECLARE_METATYPE(VariableSet)

#endif // VARIABLESET_H
