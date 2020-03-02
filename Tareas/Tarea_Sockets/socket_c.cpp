#include "socket_c.h"

Socket_C::Socket_C(){
     shocko = socket(AF_INET,SOCK_STREAM,0);
     unconnected = true;
     active = false;
};

int Socket_C::start(){
    start_shocko();
    char buffer[4096];
    std::string user_input;
    do{
        std::cout<<">>> ";

        getline(std::cin,user_input);

        int sendRes = send(shocko,user_input.c_str(), user_input.size()+1, 0);
        if(sendRes == -1){
            std::cerr<<"couldn't send to server"<<std::endl;
            continue;
        }

        memset(buffer, 0,4096);
        int bytesReceived = recv(shocko,buffer,4096,0);
        if (bytesReceived == 0){
            std::cerr<<"disconnected from server"<<std::endl;
            break;
        }

        std::cout<<"server>>>"<<std::string(buffer,bytesReceived)<<std::endl;
    }while(true);
    close(shocko);
    return 0;
};

int Socket_C::start_shocko(){
    if (shocko == -1){
        return 1;
    }
    int port = (45000);
    std::string ipAddress = "127.0.0.1";
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(port);
    inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);

    int connect_res = connect(shocko,(sockaddr*)&hint,sizeof(hint));
    if(connect_res == -1){
        return -1;
    }else{
        unconnected = false;
        return shocko;
    }
};

std::string Socket_C::send_msg(int from, int dest){
    std::string msg = ""+std::to_string(from)+std::to_string(dest);
    char buffer[4096];

    int sent_msg = send(shocko, msg.c_str(), msg.size()+1, 0);
    if(sent_msg == -1){
        std::cout<<"msg was not sent"<<std::endl;
    }
    memset(buffer,0,4096);
    int bytesReceived = recv(shocko,buffer,4096,0);
    if (bytesReceived == 0) {
        std::cerr<<"Connection with server lost"<<std::endl;
    }
    std::cout<<buffer<<std::endl;
    return std::string(buffer);
};
bool Socket_C::getUnconnected(){
    return unconnected;
};
bool Socket_C::getActive(){
    return active;
};
void Socket_C::close_shocko(){
    close(shocko);
};
