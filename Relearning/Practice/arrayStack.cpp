#include <iostream>
using namespace std;

template <class type>
class arrayStackType{

public: 
const arrayStackType<type>&operator = (const arrayStackType&);
void initialize(type value);
void pop();
bool isEmpty();
void push(type item);
type top();
int stackSize();
void print();
bool isFull();

protected:
type *arrayStack; //make sure not to call this a nodeType
int maxSize, stackTop;
};
template <class type>
bool arrayStackType<type>::isEmpty()
{
    if (stackTop==-1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

template <class type>
void arrayStackType<type>::pop()
{
    if (isEmpty())
    {
        cout << "Error: cannot pop from an empty array" << endl;
    }
    else
    {
        stackTop--;
    }

}

template <class type>
void arrayStackType<type>::push(type item)
{
    if (isFull() )
    {
        cout<< "Error: could not push to full list" <<endl;
    
    }
    else 
    {   
       arrayStack[stackTop] = item;   
        stackTop++;

    }

}

template <class type>
void arrayStackType<type>::initialize(type value)
{
    /*while (!isEmpty())
    {
        pop();
        --stackTop;
    }*/
    stackTop = -1;
    maxSize = value;
    arrayStack = new type[maxSize];
}

template<class type>
bool arrayStackType<type>::isFull()
{
    return stackTop == maxSize - 1;

}

template <class type>
type arrayStackType<type>::top()
{
    if (stackTop == -1)
    {
        cout << "error: could not return top" <<endl;
        return 0;
    }
    else 
    {
        cout << "your stack top is: " << endl;
        return arrayStack[stackTop - 1];
    }
}
template <class type>
int arrayStackType<type>::stackSize()
{
    return stackTop;

}

template <class type>
void arrayStackType<type>::print()
{
    if (isEmpty())
    {
        cout << "error: cannot print an empty list" <<endl;
    }
    else 
    {
        for (int i = -1; i < stackTop; i++)
        {
            cout << arrayStack[i] << ", ";
        }
    }
    cout << endl;
}

/*push(type item): Add a new item to the top of the stack. Ensure the stack is not full before pushing.

top(): Return the element at the top of the stack without removing it. If the stack is empty, print an error message.

isFull(): Check if the stack is full, returning true if it is and false otherwise.

initializeStack(): Reset the stack to an empty state, setting stackTop to -1.

stackSize(): Return the current number of elements in the stack.*/


int main()
{
    arrayStackType <int> schoolID;
    schoolID.initialize(13);
    cout << " pushing 14: " ;
        schoolID.push(14); 
        cout << endl;
    cout << " pushing 34: " ;
        schoolID.push(34);
        cout << endl;
    cout << " pushing 52: " ;
        schoolID.push(52);
        cout << endl;
    cout << " printing: " ;
        schoolID.print();
        cout << endl;
    cout << schoolID.top() << endl;
    schoolID.print();
    
}