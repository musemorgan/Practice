/*This program illustrates how a typedef statement can be used to create an alias for a pre-exisiting data - 
type. Typedef's can be useful for structs*/

#include <iostream>

using namespace std;

int main ()
{
typedef int integer; // [typedef reserved word][pre-exisiting data type][alias name]
integer numOfStudents; //now the alias can be used as the reserved word for the data type
cout << "How many students are in the classroom?" << endl;
cin >> numOfStudents;
cout << "\n There are " << numOfStudents << " students in the classroom. "<< endl;

    return 0;
}