#include<iostream>
#include "stack.h"
#include "linkedList.h"
using namespace std;

class linkedListStack
{
public:
    linkedListStack();
    ~linkedListStack();
    void push(int item);
    void pop();
};

linkedListStack::linkedListStack(){}
linkedListStack::~linkedListStack(){}

void linkedListStack::push(int item){
    l.addtoHead(item);
}
