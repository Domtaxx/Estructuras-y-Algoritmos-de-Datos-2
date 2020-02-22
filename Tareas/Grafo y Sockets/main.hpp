//
// Created by domtaxx on 2/19/20.
//
#ifndef LISTA_H
#define LISTA_H
struct node{
    int data;
    node* next;
    node* before;
};
class lista{
    private:
        int object_counter;
        node* head;
        node* end;
        node* get_node_by_pos(int pos);
        void deleteNode(node** head_ref, node* del);
    public:
        lista();
        lista(int T);
        bool isEmpty();
        void insert(int data_to_add);
        //void insert(int pos,int data_to_add);
        void eliminar(int pos);
        //void swap(int pos1, int pos2);
        int get_data_by_pos(int pos);
        void print();
};

#endif //
