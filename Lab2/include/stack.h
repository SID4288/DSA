#ifndef Stack_h
#define Stack_h

class Stack{
    public:
        Stack() {}
        ~Stack() {}
        virtual void push(int item)=0;
        virtual void pop()=0;
        virtual void top()=0;
        virtual void isEmpty()=0;
        
};

#endif