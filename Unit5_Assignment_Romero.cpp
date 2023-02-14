#include <iostream>
#include <iomanip>
#include <locale>
#include <string>
using namespace std;

/*
Jen Romero
The following program calculates the net pay of employees given certain parameters
*/

//funtion prototype
double weeklyPay (double, double, string, int);

//main
int main () 
{
    //function call for each employee
    cout << fixed << setprecision(2);
    cout << weeklyPay (47, 505.75, "Jen", 1);
    cout << weeklyPay (45, 55.25, "Melvin", 1);
    cout << weeklyPay (15, 65.25, "Susan", 2);
    cout << weeklyPay (41, 14.75, "Mika", 1);
    cout << weeklyPay (25, 15.0, "Eldridge", 2);
    cout << weeklyPay (55, 203.50, "Freedom", 1);
    cout << weeklyPay (32.5, 100.25, "Tyson", 1);

    return 0;

}

//function definition
double weeklyPay (double hrs, double rate, string name, int empType) 
{
    //initialize variables
    double netPay = 0.0, grossPay = 0.0, taxableWages = 0.0, ss = 0.062, 
    med = .0145, ssWages = 0.0, medWages = 0.0, FIT = 0.0, fitTax = 0.0,
    dental = 0.0, retirement = 0.0, clockedHours = 40.0, otRate = 2.0;
    locale loc;

    //add blue color
    string color = "\x1b[" + to_string(34) + ";4m";
    string reset = "\x1b[0m";

    //transforms name in all uppercase
    cout << color << endl;
    cout << endl;
    for (int i = 0; i <name.length(); i++)
    {
        cout << toupper(name[i], loc);
    }

    cout << reset << endl;

    //employee type
    string status = "";
    status = (empType == 1) ? "Fulltime" : "Partime";

    //deductables
    FIT = rate < 15.0 ? .12 : .15;
    dental = (empType == 1) ? 17.00 : 0;
    retirement = (empType == 1) ? 77.00 : 0;

    //gross pay
    grossPay = (hrs <= clockedHours) ? (hrs * rate) : ((clockedHours * rate) + ((hrs - clockedHours) * (otRate * rate)));

    //calculations
    taxableWages = grossPay - (dental + retirement);
    fitTax = taxableWages * FIT;
    ssWages = grossPay * ss;
    medWages = grossPay * med;

    //net pay
    netPay = grossPay - dental - retirement - fitTax - ssWages - medWages;

    //output
    cout << "Status: " << status << endl;
    cout << "Gross Pay: $" << grossPay << endl;

    if (empType == 1)
    {
        cout << "Dental Deduction (Pretax): $" << dental << endl;
        cout << "Retirement Deduction (Pretax): $" << retirement << endl;
        cout << "Taxable Wages: $" << taxableWages << endl;
    }

    cout << "Federal Income Tax: $" << fitTax << endl;
    cout << "Social Security Taxes: $" << ssWages << endl;
    cout << "Medicare Taxes: $" << medWages << endl;
    cout << "Net Pay: $";

    return netPay;

}