#ifndef WORKER_H
#define WORKER_H

#include <QThread>
#include <QString>
#include <QVector>
#include <QMutex>

class Worker: public QObject
{  
    Q_Object

    public:
        explicit Worker(QString * s);
        ~Worker();

        double getEmotionValue();

    private:
        QString * songTitle;
        double emotion;

    signals:
        void finished();
    
    public slots:
        void doWork();
        double getMood();
        int getSongTitle();
};
#endif // WORKER_H
