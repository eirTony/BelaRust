#ifndef LOGFRONTEND_H
#define LOGFRONTEND_H

#include <QObject>

class LogFrontEnd : public QObject
{
    Q_OBJECT
public:
    explicit LogFrontEnd(QObject * parent=0);

signals:

public slots:

};

#endif // LOGFRONTEND_H
