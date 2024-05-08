#include "linkedList.h"

class linkedListStack
{
public:
    linkedListStack();
    ~linkedListStack();
    
    void push(int item);
    int pop();
    int top();
    bool isEmpty();
private:
    LinkedList l;
};

linkedListStack::linkedListStack()
{
}

linkedListStack::~linkedListStack()
{
}
