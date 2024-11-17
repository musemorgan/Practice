#include <iostream>
using namespace std;

template <class type>
class arrayQueueType{

public: 
const arrayQueueType<type>&operator = (const arrayQueueType&);
void initialize(type size);
bool isEmpty();
void print();
void isMax();


protected: 
type *arrayQueue;
int maxSize, queueFront, queueRear, count;
};

template <class type>
void arrayQueueType<type>::initialize(type size)
{
    queueFront = -1;
    queueRear = -1;
    maxSize = size;
    count = 0;
    arrayQueue = new type[size];
    
}

template <class type>
bool arrayQueueType<type>::isEmpty()
{
   return (count ==0);
}


template <class type>
void arrayQueueType<type>::print()
{
    if (!isEmpty())
    for (int i = 0; i <count; i++)
    {
        cout << arrayQueue[i] << " "<< endl;
        queueRear++;
        // in a circular queue, youd use this current = (current + 1) % maxSize;
    }
    else 
    {
        cout << "Error: queue is empty"<< endl;
    }
}

template <class type>
void arrayQueueType<type>::isMax()
{
    if (count == maxSize)
    {
        cout << "The array is Full" << endl;
    }
    else 
    {
        cout << "You are  "<< maxSize - count << " away from max size." << endl;
    }   
}

int main()
{   
arrayQueueType <int> list1;
list1.initialize(25);
list1.isMax();



return 0;
}