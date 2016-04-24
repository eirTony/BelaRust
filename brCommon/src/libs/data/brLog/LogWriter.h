#ifndef LOGWRITER_H
#define LOGWRITER_H

#include <QObject>

class LogItem;

class LogWriter : public QObject
{
    Q_OBJECT
public:
    explicit LogWriter(QObject * parent=0);

signals:

public slots:
    virtual void write(const LogItem & item) {;}

};

#endif // LOGWRITER_H
