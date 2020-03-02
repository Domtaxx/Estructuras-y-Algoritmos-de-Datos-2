#ifndef SOCKET_C_H
#define SOCKET_C_H
#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>

class Socket_C{
private:
    int shocko;
    bool unconnected;
    bool active;
public:
    Socket_C();
    int start();
    int start_shocko();
    std::string send_msg(int from, int dest);
    bool getUnconnected();
    bool getActive();
    void close_shocko();
};

#endif // SOCKET_C_H
