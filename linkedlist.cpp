/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include <iostream>
class node{
    public:
    int data;
    node* next;
    public: 
    node(int head){
        data = head;
        next = NULL;
    }
    void pushBack(node* nodes1, int number){
        node* node12 = new node(number);
    node* itr = nodes1;
    std::cout << "itr" <<itr<< std::endl;
        if(itr!=NULL){
        itr->next = itr;
        std::cout << "data of n1   "<< itr->data << std::endl;
        std::cout << "n1->next     "<< itr->next << std::endl;
        return;
        //n1->next->data = 6;
        // n2->next = n3;
        // std::cout << "data of n2   "<< itr->data << std::endl;
        // std::cout << "n2->next"<<itr->next << std::endl;

 
    }
    itr = itr->next;
 
}
  void insert(node* &header, int checkNum, int firstnode) {
    node* insert = new node(firstnode);
    node* itr = header;
    while (itr != NULL) {
        std::cout << "Address of n1: " << itr << std::endl;
        if (itr->data == checkNum) {
            // itr->data = 6;
            std::cout << "itr->data  "<<itr->data << std::endl;
            std::cout << "itr->next  " <<itr->next<< std::endl;
            insert->next = itr->next;
            itr->next = insert;
            std::cout << "Inserted node: " << itr->next << std::endl;
            std::cout << "Connected insert node to n2: " << insert << std::endl;
            return;
        }
        itr = itr->next;
    }
}
 
 
void update(node* head, int checkNum1, int numberdata){
    // node* n1 = new node(n);
    node* itr = head;

    while(itr != NULL){
        if(itr->data == checkNum1){
            itr->next->data = numberdata;
            std::cout << "data has been changed     "<< itr->next->data << std::endl;
            return;
        }
    }
}

void deleteNode(node* header, int numNode){
    node* itr = header;
    
    while(itr != NULL){
        itr->next = itr;
        }

}
 
void show(node* header){
     node* itr = header;
     while(itr!=NULL){
         std::cout << itr->data << std::endl;
         itr = itr->next;
         return;
     }
}
}


int main()
{
    node* nodes = new node(1);
    nodes->pushBack(nodes, 2);
    nodes->pushBack(nodes, 3);
    nodes->insert(nodes, 1, 2);
    nodes->update(nodes,1, 5);
    nodes->show(nodes);
    //insertNode(NULL, 5, 10)
 
    // node* nodes1 = new node(8);
    // nodes1->connectingNode(3);
    // node* nodes2 = new node(7);
    // nodes2->connectingNode(5);
    // node* nodes3 = new node(9);
    // nodes3->connectingNode(3);
    // node* nodes4 = new node(10);
    // std::cout << nodes  << std::endl;
    // std::cout << nodes->next->data << std::endl;
    // std::cout << &nodes << std::endl;
    // nodes->next = nodes1;
    // nodes1->next = nodes2;
    // nodes2->next = nodes3;
    // nodes3->next = nodes4;
    // std::cout << nodes->data  << std::endl;
    // std::cout << nodes->next->data  << std::endl;
    // std::cout << nodes->next  << std::endl;
    // std::cout << nodes1  << std::endl;
    // std::cout << nodes1->next->data  << std::endl;
    // std::cout << nodes1->next  << std::endl;
    // std::cout << nodes2  << std::endl;
    // std::cout << nodes2->next->data  << std::endl;
    // std::cout << nodes2->next  << std::endl;
    // std::cout << nodes3  << std::endl;
    // std::cout << nodes3->next->data  << std::endl;
    // std::cout << nodes3->next  << std::endl;
    // std::cout << nodes4  << std::endl;
    // std::cout << nodes1->next->data << std::endl;
    // std::cout << &nodes1 << std::endl;
    // node* n = new node(5);
    // std::cout << n << std::endl;
    // node* e = new node(6);
    // std::cout << e << std::endl;
    // std::cout << n->data << std::endl;
    // std::cout << n->next << std::endl;
    // std::cout << &n << std::endl;
    // n->next= e;
    // std::cout << n->next << std::endl;
    // std::cout << n->next->data << std::endl;
 
 
 

    return 0;
}