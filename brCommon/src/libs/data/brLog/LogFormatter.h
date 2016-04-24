#ifndef LOGFORMATTER_H
#define LOGFORMATTER_H

#include <QObject>

class LogFormatter : public QObject
{
    Q_OBJECT
public:
    explicit LogFormatter(QObject *parent = 0);

signals:

public slots:

};

#endif // LOGFORMATTER_H
