#include <iostream>
#include <string>
using namespace std;

int main (){
//shorthand is an extension of the if...else statememnts lesson

int age;
cout << "enter your age: ";
cin >> age;
cout <<endl;
//syntax: Varaible = (condition)? "output if expression is true" : "output if expression is false";
string Answer = (age == 21)? "You are 21!" : "You are not 21.";
cout << Answer;

    return 0;
}