#include "../include/stack.h"
#include "../include/linkedList.h"
#include <iostream>

LinkedListStack::LinkedListStack() {}
LinkedListStack::~LinkedListStack() {}

bool LinkedListStack::isEmpty()
{
    if (list.isEmpty())
    {

        return true;
    }
    else
        return false;
}

bool LinkedListStack::push(int data)
{
    list.addToHead(data);
}

void LinkedListStack::pop(int &data)
{
    if (!isEmpty())
    {
        list.removeFromHead(data);
    }
    else
        std::cout << "The Stack is empty \n";
}

void LinkedListStack::top(int &data)
{
    if (!isEmpty())
    {
        list.HeadReturn(data);
    }
}

void LinkedListStack::traverse()
{
    if (!isEmpty())
    {
        
        list.Traverse();
    
    }
    else
        std::cout << "The Stack is empty";
}
int main() {
    LinkedListStack stack;

    std::cout << "Pushing elements into the stack..." << std::endl;
    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);

    std::cout << "Stack contents after pushing: ";
    stack.traverse();

    std::cout << "\nPopping element from the stack..." << std::endl;
    int poppedElement;
    stack.pop(poppedElement);
    std::cout << "Popped element: " << poppedElement << std::endl;

    std::cout << "Stack contents after popping: ";
    stack.traverse();

    return 0;
}