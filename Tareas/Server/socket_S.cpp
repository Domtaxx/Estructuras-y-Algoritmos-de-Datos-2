#include "socket_S.h"
/**
* codigo fuente tomado de https://gist.github.com/codehoose/020c6213f481aee76ea9b096acaddfaf
* modificado por Brian Wagemans Alvarado
*/

Socket_S::Socket_S(){
        graph = createGraph(9);
        addEdge(graph, 0, 1, 4);
        addEdge(graph, 0, 7, 8);
        addEdge(graph, 1, 2, 8);
        addEdge(graph, 1, 7, 11);
        addEdge(graph, 2, 3, 7);
        addEdge(graph, 2, 8, 2);
        addEdge(graph, 2, 5, 4);
        addEdge(graph, 3, 4, 9);
        addEdge(graph, 3, 5, 14);
        addEdge(graph, 4, 5, 10);
        addEdge(graph, 5, 6, 2);
        addEdge(graph, 6, 7, 1);
        addEdge(graph, 6, 8, 6);
        addEdge(graph, 7, 8, 7);
};
int Socket_S::Check_connection(){
    if (listening <= -1){
        std::cerr<<"can't create socket"<<std::endl;
        return -1;
    }else{
        std::cerr<<"socket is active"<<std::endl;
        return 0;
    }

};
int Socket_S::start(){
    sockaddr_in hint;
    hint.sin_family=AF_INET;
    hint.sin_port=htons(45000);
    inet_pton(AF_INET,"0.0.0.0", &hint.sin_addr);
    bind_and_check(hint);
    mark_listening();
    accept_calls();
    return 0;
};

int Socket_S::bind_and_check(sockaddr_in hint){
    if(bind(listening,(sockaddr*) &hint, sizeof(hint))== -1){
        std::cerr<<"can't bind to ip/port"<<std::endl;
        return -2;
    };return 1;
}
int Socket_S::mark_listening(){
    if(listen(listening,SOMAXCONN) == -1){
        std::cerr<<"can't listen"<<std::endl;
        return -3;
    }return 2;
};

int Socket_S::accept_calls(){
    client_size = sizeof(client);

    int client_socket = accept(listening,(sockaddr*) &client, &client_size);
    if(client_socket == -1){
        std::cerr<<"client problem"<<std::endl;
        return -4;
    }else{
        close(listening);
        memset(host, 0, NI_MAXHOST);
        memset(svc, 0, NI_MAXSERV);

        int result = getnameinfo((sockaddr*)&client,
                                 sizeof(client),host,NI_MAXHOST,
                                 svc, NI_MAXSERV,0);

        if(result){
            std::cout<<host<< " connected on "<< svc <<std::endl;
        }else{
            inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
            std::cout<<host<< " connected on "<< ntohs(client.sin_port) <<std::endl;
        }

        char buffer[4096];
        //mensajes aqui tengo que ver como mando dijkstra
        while(true){
            memset(buffer,0,4096);
            int bytesRecv= recv(client_socket,buffer,4096,0);
            if(bytesRecv == -1){
                std::cerr<<"connection issue"<<std::endl;
                break;
            }if(bytesRecv == 0){
                std::cout<<"client disconnected"<<std::endl;
                break;
            }
            std::cout<< "received: " <<std::string(buffer,0,bytesRecv)<<std::endl;
            if((int)buffer[0]-48<9 && (int)buffer[1]-48<9 && (int)buffer[0]-48>-1 && (int)buffer[1]-48>-1){
                std::string result =dijkstra(graph,(int)buffer[0]-48,(int)buffer[1]-48);
                send(client_socket, result.c_str(), result.size(), 0);
            }else{
                send(client_socket, "ERROR CALCULANDO DIJKSTRA", sizeof("ERROR CALCULANDO DIJKSTRA"), 0);
            }
        }close(client_socket);
        return 0;
    }
};
