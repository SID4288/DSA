#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr), tail(nullptr) {}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

bool LinkedList::isEmpty() const {
    if (head == nullptr) {
        std::cout << "List is empty" << std::endl;
        return true;
    } else {
        return false;
    }
}

void LinkedList::addToHead(int userData) {
    Node* newNode = new Node(userData, head);
    head = newNode;
    if (tail == nullptr) {
        tail = head;
    }
}

void LinkedList::addToTail(int userData) {
    Node* newNode = new Node(userData);
    if (isEmpty()) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void LinkedList::add(Node* predecessor, int userData) {
    if (predecessor == nullptr) return;
    Node* newNode = new Node(userData, predecessor->next);
    predecessor->next = newNode;
    if (predecessor == tail) {
        tail = newNode;
    }
}

bool LinkedList::removeFromHead(int& data) {
    if (isEmpty()) return false;
    Node* oldHead = head;
    data = head->data;
    head = head->next;
    if (head == nullptr) {
        tail = nullptr;
    }
    delete oldHead;
    return true;
}

bool LinkedList::removeFromTail(int& data) {
    if (isEmpty()) return false;
    if (head == tail) {
        data = head->data;
        delete head;
        head = tail = nullptr;
        return true;
    }
    Node* current = head;
    while (current->next != tail) {
        current = current->next;
    }
    data = tail->data;
    delete tail;
    tail = current;
    tail->next = nullptr;
    return true;
}

bool LinkedList::remove(int userData) {
    if (isEmpty()) return false;
    if (head->data == userData) {
        int dummy;
        return removeFromHead(dummy);
    }
    Node* current = head;
    while (current->next != nullptr && current->next->data != userData) {
        current = current->next;
    }
    if (current->next == nullptr) return false;
    Node* nodeToDelete = current->next;
    current->next = nodeToDelete->next;
    if (nodeToDelete == tail) {
        tail = current;
    }
    delete nodeToDelete;
    return true;
}

void LinkedList::traverse() const {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
