
 #include <iostream>
using namespace std;

template <class T> //definition of a node
struct nodeType{
    T info;
    nodeType<T> *link; 
};

template <class T> //template for the class with all the constructors
class linkedListType{
public:

    const linkedListType<T>& operator = (const linkedListType&); //assignment overloader: allows you to use = to continue links
    linkedListType(); //default constructor to initialize the list to an empty state
    int length();
    void second();
    void print();
    void insertLast(const T& newItem);

protected: //include count, first, last
    int count;
    nodeType<T> *first;
    nodeType<T> *last;
};

template <class T> 
linkedListType<T>::linkedListType(){ //default constructor

first = nullptr;
last = nullptr;
count = 0;
};

template <class T>
int linkedListType<T>::length(){
    cout<< count;
}

template <class T>
void linkedListType<T>::second()
{
    cout << first->link->info << endl;
}


template <class T>
void linkedListType<T>::print()
{
    nodeType<T> *current = first;
    while(current!=nullptr)
    {
        cout << current->info << " ";
        current = current->link;
    } cout << endl;
}

template <class T>
void linkedListType<T>::insertLast(const T& newItem){

    nodeType<T> *newNode = new nodeType<T>;
    newNode -> info = newItem;
    newNode -> link = nullptr;
    count++;

    if (first == nullptr)
    {
        //isEmpty = true;
        first = newNode;
        last = newNode;
        count++;
    }
    else 
    {
        last -> link = newNode;
        last = newNode;
        count++;
    }
}


int main(){
//template: intialize, length, second, print, new node
 linkedListType <int> class1grades;

class1grades.insertLast(31);
class1grades.insertLast(83);
class1grades.insertLast(97);
class1grades.insertLast(99);
class1grades.insertLast(87);
class1grades.insertLast(100);
class1grades.insertLast(100);
class1grades.print();



    return 0;
}