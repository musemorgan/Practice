/*Class notes:
1. Measuring the efficieny of the algorithm will be important

Types of searches:

Sequential search(linear search):
- Array based list & linked list 
    - utilizes traversals 
    - example: Looking in a food menu (front to back, looking through)
    - A smaller list may want to use a linear search because you dont have to write a complicated code
    Best case: You want to reduce the number of times your system has to ask "Are you the element i need" */
#include <iostream>
using namespace std;
int main(){

int a[30000];
for (int i=0; i < 30000; i++)
    if (a[i]==5439){
        cout << "found"<<endl;
        break;
    }
/*Binary search: 
-allows you to divide and conquer 
    - you decide what side of the middle index you would like to search on
    - this is dependant upon the values in your stack 
    - This code is more complicated, but this is useful for larger lists
    ( in numerical order like 4,7,9,11,14 you can search the left side of 9 if you need somehting lower than 9)
    -Binary searching is best if your numbers are in order, it cuts the amount of searchs you need in half
    Best case: if you search the middle index and that's the element you need
*/


//comparisions is how mnay times the system asks "is this the element i need"
//  How the system behaves if the system does not find what its looking for? meaning if your system has to traverse through
//  its entire stack, its behaving irratically 
//Successful search: whats the best you can do (element is found at first search), whats the worst you can do(element is the last value)
//                     ,average number of comparisons*/
return 0;
}