#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList list;

    // Test isEmpty when the list is initially empty
    std::cout << "Checking if the list is empty initially: ";
    std::cout << std::boolalpha << list.isEmpty() << std::endl;

    // Test addToHead and isEmpty
    list.addToHead(10);
    std::cout << "Checking if the list is empty after adding 10 to head: ";
    std::cout << std::boolalpha << list.isEmpty() << std::endl;
    list.traverse();

    // Test addToTail and isEmpty
    list.addToTail(20);
    std::cout << "Checking if the list is empty after adding 20 to tail: ";
    std::cout << std::boolalpha << list.isEmpty() << std::endl;
    list.traverse();

    // Test add method and isEmpty
    list.add(list.getHead(), 15); // Adding 15 after head (10)
    std::cout << "Checking if the list is empty after adding 15 after head: ";
    std::cout << std::boolalpha << list.isEmpty() << std::endl;
    list.traverse();

    // Test removeFromHead and isEmpty
    int data;
    list.removeFromHead(data);
    std::cout << "Removed from head: " << data << std::endl;
    std::cout << "Checking if the list is empty after removing from head: ";
    std::cout << std::boolalpha << list.isEmpty() << std::endl;
    list.traverse();

    // Test removeFromTail and isEmpty
    list.removeFromTail(data);
    std::cout << "Removed from tail: " << data << std::endl;
    std::cout << "Checking if the list is empty after removing from tail: ";
    std::cout << std::boolalpha << list.isEmpty() << std::endl;
    list.traverse();

    // Test remove and isEmpty
    list.addToHead(30);
    list.addToTail(40);
    list.addToTail(50);
    std::cout << "List after adding 30 to head and 40, 50 to tail: ";
    list.traverse();

    list.remove(40);
    std::cout << "Removed 40: ";
    list.traverse();
    std::cout << "Checking if the list is empty after removing 40: ";
    std::cout << std::boolalpha << list.isEmpty() << std::endl;

    // Final check when the list has elements
    std::cout << "Checking if the list is empty at the end: ";
    std::cout << std::boolalpha << list.isEmpty() << std::endl;

    return 0;
}
