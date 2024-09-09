#include <iostream>

using namespace std;

int main (){
// Write a program that reads a user's age and determines if they are eligible to vote 
//(use relational and logical operators).
int month, year;
int x,y;
x = 8; //Since it is August 31st when this code was being made, the entire month of August counts.
y = 2005;

//Establishes criteria neccessary to enter the if...else statements
cout << "Welcome! Enter your birth year below. " << endl;
cin >> year;

if (year == y) //Entering based upon the year from the users input. See that this does not close until the else if staememnt on line 31
//This means everyhing outside these brackets pertain to the answer to their birth year.
{   cout << "You may qualify to vote! Let's verify your birth month too! : ";
    cin >> month;
    cout << endl;
    //The information requested above allows you to enter another if...else statement. Now everything is dependant upon having a 
    //birth year == to what y is set to, and the following month criteria. All brackets in this nested statement can open and close

      if (month <= x)
      {
        cout << "Congrats! You are eligible to vote!" << endl;
      }  
        else if (month > x) 
        {
            cout << "you are ineligible based off your birth month." << endl;
        }
}
else if (year > y) //This is where you continue the rest of your if...else statements from the original year criteria in line 17. 
//These automatically make you eligible or ineligible based off your birth year. Tip!! Stating what made the criteria eligible in the cout
//statements makes it easy to track bugs in the future.
{
    cout << "you are ineligble based off your birth year."<<endl;
}
else  if (year < y)
{
    cout << "You are eligible to vote without verification of your birth month!" <<endl;
}

    return 0;
}