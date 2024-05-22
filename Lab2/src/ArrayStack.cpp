#include "../include/stack.h"
#include <iostream>
ArrayStack::ArrayStack(int size)
    : size(size), topindex(-1), data(new int[size]) {}



bool ArrayStack::isEmpty()
{
    if (topindex < 0)
    {
        return true;
    }
    else
        return false;
}

bool ArrayStack::isFull()
{
    if (topindex >= size - 1)
        return true;
    else
        return false;
}

bool ArrayStack::push(const int element)
{
    if (topindex < size - 1)
    {
        topindex++;
        data[topindex] = element;
        return true;
    }
    else
        return false;
}

void ArrayStack::top(int &element) 
{
    if (topindex < 0)
    {
    std::cout<<"The stack is empty ";
    }
    else
    {
        element = data[topindex];
    
    }
}

void ArrayStack::pop(int &element)
{
    if (!isEmpty())
    {
        element = data[topindex];
        topindex--;
        
    }
    else
    {
        std::cout<<"The list is empty"<<std::endl;
        
    }
}

void ArrayStack::traverse()
{

    if(!isEmpty())
    {
        std::cout<<"The elements in the stack : ";
        int i;
    for(i=topindex;i>=0;i--)
    {
        std::cout<<" "<<data[i];
    }
    }
    else
    std::cout<<"The Stack is empty \n";
}
int main() {
    ArrayStack stack(5);

    std::cout << "Pushing elements into the stack..." << std::endl;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

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