 /*exam practice: Insertion at the end (insertEnd(int value)): Insert a new node at the end of the list.
Deletion from the beginning (deleteFront()): Delete the first node in the list.
Traversal forward (traverseForward()): Print the elements of the list starting from the head to the tail.
Traversal backward (traverseBackward()): Print the elements of the list starting from the tail to the head.
Search (search(int value)): Search for a node with the given value in the list. If found, return true; otherwise, return false.
Destructor: Ensure that the class properly deallocates memory when the list is destroyed to prevent memory leaks.
Requirements:
You must implement a Node structure that contains:

An integer data field.
A pointer to the next node (next). ignoring this one
A pointer to the previous node (prev). ignoring this one
Your DoublyLinkedList class should have:

A pointer to the head of the list.
A pointer to the tail of the list.
Constraints:
Your implementation must support an empty list (i.e., a head and tail pointing to nullptr initially).
Ensure that all memory is managed properly, and no memory is leaked.*/
 
#include <iostream>
#include <cassert>
using namespace std;

template <class type> //definition of a node
struct nodeType{
    type data;
    nodeType<type> *link; 
};

template <class type>
class linkedListType{
    public: 
    const linkedListType<type>& operator = (const linkedListType&);
    void initialize();
    void insertAtEnd(type insert);
    void deleteFront();
    void traversal();
    void traverseBackward();
    bool search(type value);
    void deleteEnd();
    ~linkedListType();



    protected:
    nodeType<type> *head;
    nodeType<type> *tail;
    int count;
    //This information is needed if an array is included 
    /*nodetType<Type> *list;
    int stackTop;
    int maxSize;*/

};

template <class type>
void linkedListType<type>::initialize()
{
    head = nullptr;
    tail = nullptr;
    count = 0;
}


template <class type>
void linkedListType<type>::insertAtEnd(type insert)
{
    nodeType<type> *newNode = new nodeType<type>;

    newNode -> data = insert;
    newNode ->link = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        tail =  newNode;
       count++;
    }

    else 
    {
        tail->link = newNode;
        tail = newNode;
        count++;
    }
}

template <class type>
void linkedListType<type>:: deleteFront()
{   
    nodeType<type> *temp = head;

    if (head ==nullptr)
    cout << "error: empty list. Cannot delete front"<< endl;

    else 
    {
        head = head->link;
        delete temp;
        count--;
        if (head == nullptr)
            tail = nullptr;
    }
}

template <class type>
void linkedListType<type>::traversal()
{   
    nodeType<type> *current = head;

    if (head == nullptr)
    {
    cout <<"Error: cannot traverse an empty list" << endl;
    }
    else {
        while (current != nullptr)
        {
            cout << current -> data << " ";
            current = current ->link;
        }
    }
        
}


template <class type>
bool linkedListType<type>::search(type value)
{
    nodeType<type> *current = head;

while (current != nullptr)
    {
     if (current->data != value)
     {
        current = current -> link;
     }
     else if (current->data == value)
     {
        return true;
     }
 return false;
    }

}
template <class type>
linkedListType<type>::~linkedListType()
{
    while (head != nullptr){
    deleteFront();}
}

template <class type>
void linkedListType<type>::deleteEnd()
{
    nodeType<type> *current = head;
    while (current -> link != tail)
    {
        current = current ->link;
    }
    delete tail;
    tail = current;
    tail ->link = nullptr;
}

int main (){
    linkedListType <int> list1;
    list1.initialize();
    list1.insertAtEnd(45);
    list1.insertAtEnd(32);
    list1.insertAtEnd(15);
    list1.insertAtEnd(20);
    list1.insertAtEnd(493);



    return 0;
}
