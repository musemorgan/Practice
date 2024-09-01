#include <iostream>
using namespace std;
int main (){

int groups, members;
cout << "Lets practice the syntax of a for loop and actually work with a nested for loop example! \n";
cout << "The syntax for a for loop is as follows: for (initilize a variable, make said variable have exit parameters \n";
cout << ", change the value of the variable so it can at some point meet the exit conditions.)" <<endl;
cout << "Now, lets move onto an actual example!\n" <<endl;

//Create a example that allows you to make multiple groups with a select number of members. Take input for member names
//for a for loop to be nested, the brackets of the first loop cannont be closed until the nested loop's brakcets are closed.
cout << "Enter how many groups there are: ";
cin >> groups;
cout << "Enter how many members there are per group: ";
cin >> members;

for (int outer = groups; outer > 0; --outer){
    cout << "Group " << outer <<":" <<endl;

    for (int inner = members; inner > 0; --inner){
        cout << "   Member " <<inner<< ":"<< endl;
    }
}

    return 0;

}