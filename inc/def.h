#ifndef DEF_H
#define DEF_H
#include <QTime>

#define _TIME_ qPrintable(QTime::currentTime().toString("hh:mm:ss:zzz"))

#define QDEBUG_FUNC_ENTER \
    QTime _t; qDebug("%d, %s, %d, %s(), Entered",_TIME_,  __FILE__, __LINE__, __FUNCTION__);_t.start();

#define QDEBUG_FUNC_EXIT \
    qDebug("%d, %s, %d, %s(), Exit, elasped time = %d", _TIME_, __FILE__, __LINE__, __FUNCTION__, _t.elapsed());


#define QDEBUG(format, ...) qDebug("%d, %s, %d, %s(), "  format, _TIME_, __FILE__, __LINE__, __FUNCTION__ , ## __VA_ARGS__)

#define QDEBUG_ERR(format, ...) qDebug("%d, %s, %d, %s(), Error: "  format, _TIME_, __FILE__, __LINE__, __FUNCTION__ , ## __VA_ARGS__)
#define QDEBUG_WARN(format, ...) qDebug("%d, %s, %d, %s(), Warn: "  format, _TIME_, __FILE__, __LINE__, __FUNCTION__ , ## __VA_ARGS__)
#define QDEBUG_INFO(format, ...) qDebug("%d, %s, %d, %s(), Info: "  format, _TIME_, __FILE__, __LINE__, __FUNCTION__ , ## __VA_ARGS__)


#endif //DEF_H
