#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include "includes.h"
#include "connect.h"

class Client : public QObject
{
    Q_OBJECT
public:
    //explicit Client(QObject *parent = nullptr);
    Client();
    ~Client();

    static const int size = 200;
    struct sockaddr_in address; // структура с адресом
    struct hostent* hostinfo;
    int addrlen;
    int sock; // создание TCP-сокета
    pthread_t thread_reconnect;
    QMutex mutex;
    char buff[size];

signals:

public slots:
    void start();
    void stop();

    void time(QString message);
    void period(QString message);

    void team1_name(QString message);
    void team1_goalsend(QString message);
    void team1_goaldel(QString message);
    void team1_delsend(QString message);
    void team1_deldel(QString message);

    void team2_name(QString message);
    void team2_goalsend(QString message);
    void team2_goaldel(QString message);
    void team2_delsend(QString message);
    void team2_deldel(QString message);
};
#endif // CLIENT_H
