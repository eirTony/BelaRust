#ifndef LOGCORE_H
#define LOGCORE_H

#include <QObject>

class QQUrl;
class LogFilter;
class LogFormatter;
class LogFrontEnd;

class LogCore : public QObject
{
    Q_OBJECT
public:
    explicit LogCore(QObject * parent=0);

signals:

public slots:
    void add(const QQUrl & url) {;}
    void add(LogFilter * filter) {;}
    void add(LogFormatter * formatter) {;}
    void add(LogFrontEnd * frontend) {;}
};

#endif // LOGCORE_H
