#ifndef CONNECT_H
#define CONNECT_H

#include "includes.h"
#include "client.h"

void * reconnect_socket (void * param);

void * connect_socket(void * param);

#endif // CONNECT_H
