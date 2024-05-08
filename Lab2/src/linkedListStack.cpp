#include<iostream>
#include "stack.h"
#include "linkedList.h"
#include "linkedListStack.h"
using namespace std;

class linkedListStack
{
public:
    linkedListStack();
    ~linkedListStack();
    void push(int item);
    void pop();
private:
    LinkedList l;
};

void linkedListStack::push(int item){
    l.addToHead(4);
};

/*
git config --global user.name/email "name"/"email"
git clone <repo link>
aafno branch ma xirni
git add . 
git commit -m ""
git push
*/