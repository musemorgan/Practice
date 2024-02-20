#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main ()
{
int num1 = 0, num2 = 0, num3 = 0;
int largest, middle, smallest;

cout << "Please enter 3 numbers: " << endl;
cin >> num1 >> num2 >> num3;

if (num1 > num2 && num1 > num3)
    {
        num1 = largest;
        cout << "Number 1 is the largest interger. " << endl;
    }
else
    if (num2 > num1 && num2 > num3)
        {
            num2 = largest;
            cout << "Number 2 is the largest interger. " << endl;
        }
    else 
        if (num3 > num1 && num3 > num2)
            {
                num3 = largest;
                cout << "Number 3 is the largest integer. " << endl;
            }

if (num1 < num2 && num1 < num3)
    {
        num1 = smallest;
        cout << "Number 1 is the smallest interger. " << endl;
    }

if (num2 < num1 && num2<num3)
        {
            num2 = smallest;
            cout << "Number 2 is the smallest interger. " << endl;
        }
if (num3 < num1 && num3 < num2)
        {
          num3 = smallest;
           cout << "Number 3 is the smallest integer. " << endl;
        }



if (num1 != smallest && num1!= largest)
    {
        num1 = middle;
        cout << "Number 1 is the mid-range interger. " << endl;
    }
else
    if (num2 != smallest && num2!=largest)
        {
            num2 = middle ;
            cout << "Number 2 is the mid-range interger. " << endl;
        }
    else 
        if (num3 != smallest && num3 !=largest)
            {
                num3 = middle;
                cout << "num3 is the mid-range integer. "<< endl;
            }

cout << endl;

cout << largest << ", "<< middle << ", "<< smallest << " is the order of the integers!" << endl;
    return 0;
}