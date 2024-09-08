//write a main program that creates a class that outputs two professors, their rank, name,
//salary, if theyre tenured, a constructor for their names and rank, and increase
//salary function

#include <iostream>
#include <cmath>
using namespace std;

class professor { //This is a 
/*The 3 items below are data members. Objects will use these data members in the main 
 to serve as an item that has subcategories. ex: professors are obejcts, their name is a data 
 member*/

    public: 
       string rank;
       string professorName;
       double salary, x, ID;

//This is a member function. This can be called on in the main function to calculate 
// something. uses return as a means to calculate
       double calculate_increase (){
        return salary + x;
       }
       int determine_ID(){
        return ID++;
       }
};
//After you complete your class, close your brackets 

int main(){
string answer;
//because the class is compeletely public, you can create objects in any function
//below, im going to create objects of the professor class

professor Prof1, Prof2;

//now values can get stored to the data members for the objects above
Prof1.rank = "Dean";
Prof1.professorName = "Muse";
Prof1.salary = 125,000;
Prof1.determine_ID();

cout<<"Does professor 1 have a salary increase? " <<endl;
cin >> answer;

if (answer == "yes" || answer == "Yes")
{
    cout << "Enter what the salary increase is: " <<endl;
    cin >> Prof1.x;
    cout << Prof1.calculate_increase() << " is the new salary for professor " << Prof1.professorName <<endl;
    cout << "Their rank is: " << Prof1.rank <<endl;
}
else {
     cout << "Salary: $"<< Prof1.calculate_increase()<< endl;
     cout << "Name: " << Prof1.professorName <<endl;
    cout << "Rank: " << Prof1.rank <<endl;
}


return 0;
} 

