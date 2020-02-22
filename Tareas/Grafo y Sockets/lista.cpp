//
// Created by domtaxx on 2/19/20.
//
#include <iostream>
#include "main.hpp"
lista::lista(){
    head = nullptr;
    end = nullptr;
};

/*
 *
 */
void lista::deleteNode(node** head_ref, node* del){
    /* base case */
    if (*head_ref == NULL || del == NULL)
        return;

    /* If node to be deleted is head node */
    if (*head_ref == del)
        *head_ref = del->next;

    /* Change next only if node to be
    deleted is NOT the last node */
    if (del->next != NULL)
        del->next->before = del->before;

    /* Change prev only if node to be
    deleted is NOT the first node */
    if (del->before != NULL)
        del->before->next = del->next;

    /* Finally, free the memory occupied by del*/
    delete del;
    return;
}
lista::lista(int T){
    node* Node = new node({T,nullptr,nullptr});
    head = Node;
    end = Node;
    object_counter=1;
};
bool lista::isEmpty(){
    if(object_counter==0){
        return true;
    }else{
        return false;
    }
};
void lista::insert(int data_to_add){
    node* Node = new node({data_to_add,nullptr,nullptr});
    if(object_counter==0){
        head = Node;
    }else{
        end->next = Node;
        end->before = end;
    }
    end = Node;
    object_counter+=1;
};
        //void insert(int pos,int data_to_add);
void lista::eliminar(int pos){
    if(!(pos>object_counter-1 || pos < 0)){
        node* temp = get_node_by_pos(pos);
        deleteNode(&head, temp);
    }else{
        return;
    }
};

//void swap(int pos1, int pos2);
int lista::get_data_by_pos(int pos){
    if(object_counter<=0 || pos>=object_counter){
        return NULL;
    }else{
        node* temp;
        temp = head;
        for(int i = 0; i<pos; i++){
            temp = temp->next;
        }return temp->data;
    }
};
node* lista::get_node_by_pos(int pos){
    if(object_counter<=0 || pos>=object_counter){
        return nullptr;
    }else{
        node* temp;
        temp = head;
        for(int i = 0; i<pos; i++){
            temp = temp->next;
        }return temp;
    }
};

void lista::print(){
    node* temp = head;
    for(int i = 0;i<object_counter;i++){
        std::cout<<temp->data<<std::endl;
        if (!(i==object_counter-1)){
            temp = temp->next;
        }
    };
};

