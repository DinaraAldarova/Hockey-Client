#include "connect.h"

void * reconnect_socket (void * param)
{
    Client * client = (Client *)param;
    connect_socket(client);
    char b[10];
    while (recv(client->sock,&b,sizeof(b),NULL) <= 0)
    {
        close(client->sock);
        sleep(5);
        connect_socket(client);
    }
}

void * connect_socket(void * param)
{
    Client * client = (Client *)param;
    client->sock = NULL;
    while (client->sock <= 0)
    {
        client->sock = socket(AF_INET, SOCK_STREAM, 0);
        if(client->sock < 0)
        {
            perror("socket");
            //return -1;
        }
        // Указываем параметры сервера
        client->address.sin_family = AF_INET; // домены Internet
        client->address.sin_port = htons(8080); // или любой другой порт...
        client->address.sin_addr.s_addr = INADDR_ANY;
        client->addrlen = sizeof(client->address);
        if(connect(client->sock, (struct sockaddr *)&client->address, client->addrlen) < 0)
        {
            perror("connect 1\n");
            close(client->sock);
            client->sock = NULL;
            //return -1;
        }
        sleep(2);
    }
}
