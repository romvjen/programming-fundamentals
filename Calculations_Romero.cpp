#include <iostream>
#include <cmath>
using namespace std;

int main () {
    //declare variables
    double number1, number2;
    int number3, number4;

    //declare operations
    double sum, diff, prod, quo;
    int rem;

    //user input
    cout << "Enter the first number: ";
    cin >> number1;
    cout << endl;

    cout << "Enter the second number: ";
    cin >> number2;
    cout << endl;

    cout << "Enter the third number: ";
    cin >> number3;
    cout << endl;

    cout << "Enter the fourth number: ";
    cin >> number4;
    cout << endl;

    //process
    //add the numbers
    sum = number1 + number2;
    cout << "The sum of the first and second number is: " << sum << endl;

    //subtract the numbers
    diff = number1 - number2;
    cout << "The difference between the first and second number is: " << diff << endl;

    //multiply the numbers
    prod = number1 * number2;
    cout << "The product of the first and second number is: " << prod << endl;

    //divide the numbers
    quo = number1 / number2;
    cout << "The quotient of the first and second number is: " << quo << endl;

    //modulus remainder
    rem = number3 % number4;
    cout << "The remainder of the first and second number is: " << rem;

    return 0;

}