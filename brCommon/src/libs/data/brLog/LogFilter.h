#ifndef LOGFILTER_H
#define LOGFILTER_H

#include <QObject>

class LogFilter : public QObject
{
    Q_OBJECT
public:
    explicit LogFilter(QObject * parent=0);

signals:

public slots:

};

#endif // LOGFILTER_H
