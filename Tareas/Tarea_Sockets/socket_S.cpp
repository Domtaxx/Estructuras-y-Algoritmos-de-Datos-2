#include "socket_S.h"


    Socket_S::Socket_S(){};
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
                std::cout<< "reciived: " <<std::string(buffer,0,bytesRecv)<<std::endl;
                send(client_socket, buffer, bytesRecv+1,0);
            }close(client_socket);
            return 0;
        }
    };
/**
Socket::Socket(){
    graphs = lista<Graph*>();
}
void Socket::createGraphs(int amount_nodes){
    struct Graph* graph = createGraph(amount_nodes);
    graphs.insert(graph);
};
void Socket::addEdgeToGraph(int graphToAdd,int src,int dest,int weight){
    addEdge(graphs.get_data_by_pos(graphToAdd), src, dest, weight);
};

lista<lista<int>> Socket::Run_dijkstra(int graph_pos, int src){
    return dijkstra(graphs.get_data_by_pos(graph_pos),src);
};
*/
