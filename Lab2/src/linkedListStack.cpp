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
