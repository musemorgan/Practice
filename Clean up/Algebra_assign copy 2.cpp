#include <cmath>
#include <iostream>

using namespace std;


int main()
{
    double a,b,c;
    double x_1, x_2;

    cout<<"Provide the coefficients of your quadratic equation: ";
    cin >> a >> b >> c;

    x_1 = (-b + sqrt (pow (b,2)-4*a*c))/(2*a);
    x_2 = (-b - sqrt (pow (b,2)-4*a*c))/(2*a);

    cout<< "The two real soultions are: " << x_1 << " "<< x_2 <<endl;
    return 0;
}
