#include "client.h"

//Client::Client(QObject *parent) : QObject(parent) {}
Client::Client()
{
    pthread_create(&thread_reconnect, NULL, reconnect_socket, this);
}

Client::~Client()
{
    pthread_cancel(thread_reconnect);
}

void Client::start()
{
    mutex.lock();
    QString s = "start";
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
void Client::stop()
{
    mutex.lock();
    QString s = "stop";
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
void Client::time(QString message)
{
    mutex.lock();
    QString s = "time:"+message;
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
void Client::period(QString message)
{
    mutex.lock();
    QString s = "period:"+message;
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
void Client::team1_name(QString message)
{
    mutex.lock();
    QString s = "team1_name:"+message;
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
void Client::team1_goalsend(QString message)
{
    mutex.lock();
    QString s ="team1_goalsend:"+message;
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
void Client::team1_goaldel(QString message)
{
    mutex.lock();
    QString s ="team1_goaldel:"+message;
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
void Client::team1_delsend(QString message)
{
    mutex.lock();
    QString s = "team1_delsend:"+message;
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
void Client::team1_deldel(QString message)
{
    mutex.lock();
    QString s = "team1_deldel:"+message;
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}

void Client::team2_name(QString message)
{
    mutex.lock();
    QString s ="team2_name:"+message;
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
void Client::team2_goalsend(QString message)
{
    mutex.lock();
    QString s ="team2_goalsend:"+message;
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
void Client::team2_goaldel(QString message)
{
    mutex.lock();
    QString s ="team2_goaldel:"+message;
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
void Client::team2_delsend(QString message)
{
    mutex.lock();
    QString s ="team2_delsend:"+message;
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
void Client::team2_deldel(QString message)
{
    mutex.lock();
    QString s = "team2_deldel:"+message;
    char * b = s.toUtf8().data();
    int len = s.length()+1;
    send(sock,b,len,NULL);
    mutex.unlock();
}
