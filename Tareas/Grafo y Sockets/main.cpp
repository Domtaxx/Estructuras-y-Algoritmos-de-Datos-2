#include "Linked_List.hpp"
#include "queue.hpp"
int main(){
    Queue<int> cola = Queue<int>();
    cola.enQueue(1);
    cola.enQueue(2);
    cola.enQueue(3);
    cola.enQueue(4);
    cola.enQueue(5);
    std::cout<<cola.peek()<<std::endl;   
    cola.dequeue();
    cola.dequeue();
    std::cout<<cola.peek()<<std::endl; 

    return 0;
};

