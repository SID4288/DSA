
#include "Node.h"
#include <iostream>

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList();
    ~LinkedList();
    
    bool isEmpty() const;
    void addToHead(int userData);
    void addToTail(int userData);
    void add(Node* predecessor, int userData);
    bool removeFromHead(int& data);
    bool removeFromTail(int& data);
    bool remove(int userData);
    void traverse() const;
    
    Node* getHead() const { return head; }
};

