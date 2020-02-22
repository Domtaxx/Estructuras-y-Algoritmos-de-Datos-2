#include <iostream>
#include "main.hpp"
int main(){
    lista list = lista();
    for(int i=0;i<600;i++){
        list.insert(i);
    }
    std::cout<<list.get_data_by_pos(599)<<std::endl;
    list.eliminar(0);
    list.print();
    
    return 0;
};

