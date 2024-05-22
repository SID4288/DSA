#include "../include/queue.h"
#include "../include/linkedList.h"
#include <iostream>


bool LinkedListQueue::isEmpty()
{
   if(list.isEmpty())
   {
    return true;
   }
   else 
   return false;
}

void LinkedListQueue::enqueue(int element)
{
   
    
        list.addToTail(element);
    


}

void LinkedListQueue::dequeue(int &element)
{
    if(!isEmpty())
    {
        list.removeFromHead(element);
    }
}

void LinkedListQueue::front(int &element)
{
    list.HeadReturn(element);
    
}

void LinkedListQueue::rear(int &element)
{
    list.TailReturn(element);
}
bool LinkedListQueue::isFull() {
    // Since LinkedListQueue does not have a capacity limit,
    // it is never considered full.
    return false;
}


void LinkedListQueue::traverse()
{
    list.Traverse();
}
int main() {
    LinkedListQueue queue;

    std::cout << "Enqueuing elements into the queue..." << std::endl;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    std::cout << "Queue contents after enqueuing: ";
    queue.traverse();

    std::cout << "\nDequeuing element from the queue..." << std::endl;
    int dequeuedElement;
    queue.dequeue(dequeuedElement);
    std::cout << "Dequeued element: " << dequeuedElement << std::endl;

    std::cout << "Queue contents after dequeuing: ";
    queue.traverse();

    return 0;
}