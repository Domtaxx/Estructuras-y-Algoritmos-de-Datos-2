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
    /**
     * @brief Socket_C constructor
     */
    Socket_C();
    /**
     * @brief start client socket waiting for response
     * @return
     */
    int start();
    /**
     * @brief start_shocko start client socket, without waiting or sending msgs
     * @return
     */
    int start_shocko();
    /**
     * @brief send_msg a function that uses the sockets to communicate
     * @param from node from
     * @param dest node destiny
     * @return dijkstras awnser
     */
    std::string send_msg(int from, int dest);
    /**
     * @brief getter for unconnected
     * @return
     */
    bool getUnconnected();
    /**
     * @brief getter for active
     * @return
     */
    bool getActive();
    /**
     * @brief close_shocko, closes the socket
     */
    void close_shocko();
};

#endif // SOCKET_C_H
