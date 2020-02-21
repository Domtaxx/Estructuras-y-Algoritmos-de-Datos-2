//
// Created by domtaxx on 2/19/20.
//
#include <iostream>
#include "main.hpp"
lista::lista(){
    head = nullptr;
    end = nullptr;
};
lista::lista(int T){
    node Node = {T,nullptr,nullptr};
    head = &Node;
    end = &Node;
    object_counter=1;
};
void insert(int data_to_add){

};
        //void insert(int pos,int data_to_add);
        //void eliminar(int pos);
        //void swap(int pos1, int pos2);
        //node* get_node_by_pos(int pos);
void lista::print(){
    node* temp = head;
    for(int i = 0;i<object_counter;i++){
        std::cout<<temp->data<<std::endl;
        if (!(i==object_counter-1)){
            temp = temp->next;
        }
    };
};

