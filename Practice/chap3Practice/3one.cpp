#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
ifstream inFile;
ofstream outFile;
string firstName, lastName, department;
double monthlyGrossSalary, bonus, taxes, distance, travelingTime, numberSold, costOfCoffee;



inFile.open("inData.txt");
outFile.open("outData.txt");

inFile >> firstName >> lastName >> department;
outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;

inFile >> monthlyGrossSalary >> bonus >> taxes;
outFile << fixed << setprecision(2) << showpoint;
outFile << "Monthly Gross Salary: " << monthlyGrossSalary << ", Monthly Bonus: " << bonus << "%, " << "Taxes: " << taxes <<"%" << endl;
double payCheck = monthlyGrossSalary - (monthlyGrossSalary * (bonus/100 + taxes/100));
outFile <<"Paycheck: $" << payCheck << endl;

inFile >> distance >> travelingTime;
outFile << "\nDistance Traveled: " << distance << " miles, Traveling Time: " << travelingTime << " hours, " <<endl;
double averageSpeed = distance / travelingTime;
outFile << "Average Speed: " << averageSpeed << " miles per hour\n" <<endl;

inFile >> numberSold >> costOfCoffee;
outFile << "Number of Cups Sold: " << numberSold <<", Cost: $" << costOfCoffee <<endl;
double salesAmount = numberSold * costOfCoffee;
outFile << "Sales Amount: $"<< salesAmount <<endl;


    return 0;
}