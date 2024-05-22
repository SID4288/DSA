
#include <iostream>
#include "LinkedList.h"
#pragma once
class IQueue
{
public:
    IQueue() {}
    ~IQueue() {}
    virtual void enqueue(int element) =0;
    virtual void dequeue(int &element) =0;
    virtual bool isEmpty()=0 ;
    virtual bool isFull()=0 ;
    virtual void front(int &element)=0 ;
    virtual void rear(int &element) =0;
    virtual void traverse()=0 ;
};

class LinkedListQueue : public IQueue
{
private:
    LinkedList list;

public:
    LinkedListQueue() {}
    ~LinkedListQueue() {}
    void enqueue(int element) override;
    void dequeue(int &element) override;
    bool isEmpty() override;
    bool isFull() override;
    void front(int &element) override;
    void rear(int &element) override;
    void traverse() override;
};

class ArrayQueue : public IQueue {
private:
    int size;
    int topindex;
    int *data;

public:
    ArrayQueue(int x);
    ~ArrayQueue();
    void enqueue(int element) override;
    void dequeue(int &element) override;
    bool isEmpty() override;
    bool isFull() override;
    void front(int &element) override;
    void rear(int &element) override;
    void traverse() override;
};
