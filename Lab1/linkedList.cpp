#include<iostream>
#include "linkedList.h"
using namespace std;

LinkedList::LinkedList(){
    this->HEAD = NULL;
    this->TAIL = NULL;
}

bool LinkedList:: isEmpty(){
    return HEAD == NULL;
}
void LinkedList::addToHead(int data){
    Node *newNode = new Node(data,HEAD);
    if (this-> isEmpty()){
        TAIL = newNode;
    }
    HEAD = newNode;
}

void LinkedList::print(char seperator){
    cout<<"Contents: "<<endl;
    for(Node* t = HEAD; t!= NULL; t=t->next){
        cout<< t->info <<seperator;
    }
}
void LinkedList::traverse(){
    Node *p = HEAD;
    while(p!=NULL){
        cout<<p->info<<endl;
        p=p->next;
    }

}

bool LinkedList::removeFromTail(int &x){
    if(!isEmpty){
        Node *nodeToDelete = TAIL;
        if(HEAD==TAIL){
            HEAD = NULL;
            TAIL = NULL;
        }
        else{
            Node *pred = HEAD;
            while (pred->next){
                
            }
        }
    }
}
