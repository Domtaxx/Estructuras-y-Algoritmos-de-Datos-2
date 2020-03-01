#include "client.h"
#include "graph.h"
#include "socket_S.h"
#include <QApplication>

int main(int argc, char *argv[])
{    
    struct Graph* graph = createGraph(9);
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
    std::cout<<dijkstra(graph, 0, 3)<<std::endl;
    //Socket_S server = Socket_S();
    //server.start();

    //QApplication a(argc, argv);
    //Client w;
    //w.show();
    //return a.exec();
}

