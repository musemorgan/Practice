#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;
//Practicing classes, structs, lists, vectors, iterators, arrays, and pointers
// older compiler is used so must use this command so the vecotor can use a list: g++ -std=c++11 lists.cpp -o Lists
class Registration
{
    public:
    string Name, degreeStatus, edu, major, minor;

    string edulevel[5] = {"Freshman", "Sophmore", "Junior", "Senior", "Graduate"}; //sytnax for creating a list and vector (just switch vector for string)
    //lists are not continguous, so you have to traverse rather than using the index to output the code. However, vectors
    //have the same syntax but lets you traverse a list with indexcies as if it were contiguous 
    
    void create_student(){
    cout << "Input student Name: " << endl;
    cin >> Name;
    cout << "Input one of the listed levels as the students education level ("; 
    
 for (int i = 0; i < 5; i++ ){ //vector traversal 
    cout << edulevel[i] << " ";
    }
    cout << "): " << endl; 

    cin.ignore();
    getline(cin, edu);
    cout << "Input the status of the students degree (Graduated, Good standing, Academic Probation): " << endl;
    cin.ignore();
    getline(cin, degreeStatus);
    cout << "Input the students major and minor (n/a if minor does not apply)" << endl;
    cin >> major >> minor;
    }
};


//Practicing structs, iterators, arrays, and pointers
int main(){
string answer;
cout << "Would you like to register for classes? Yes or No" << endl;
cin >> answer;


if (answer == "yes" || answer == "Yes"){
Registration student;  
student.create_student();
}
else
{
    cout << "error: exit" << endl;
}


return 0;


}