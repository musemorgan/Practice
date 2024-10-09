#include <iostream>
using namespace std;

//creating a class, using initializing lists, proper object creation, and including notes for readable code
template <typename T> //parameter for template
class courses{ //creating a class named courses

public:
courses(T seats, T students): x(seats), y(students){} //creating member variables called students and seats with a constructor (left side): initializer list(right side)

void print(){
cout << "Number of seats: " << x <<" & " << "Number of students: " << y << endl; 
};

private:
T x; // stores the data for the first value
T y; //stores the data for the secon value
//These MUST be initialize outside of the brackets of the courses class to ensure they aren't static
//syntax (the classes data type is on the left | what sits outside of the initializer lists paranthesis is on the right (hence: T x))
};


int main (){
int a, b;
cout << "Professor, please enter two digits. The first represents the number of seats you have."<< endl;
cout << "The second will represent the number of students you have." << endl;
cout << "Enter digits here: " << endl;
cin >> a >> b;
courses <int> class1(a,b); //class1 is now an object of courses
class1.print(); //class1 can use this member fucntions within class because it is an object




return 0;
}
