#ifndef NODE_H
#define NODE_H

class Node {
public:
    int data;
    Node* next;
    
    Node(int userData, Node* nextNode = nullptr) : data(userData), next(nextNode) {}
};

#endif
