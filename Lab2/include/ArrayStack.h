#include "stack.h"

class ArrayStack{

    public:
        ArrayStack(){};
        ~ArrayStack(){};

        void push(int item);
        int pop();
        int top();
        bool isEmpty();
};