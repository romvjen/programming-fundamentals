#include <iostream>
using namespace std;

int main () {

   //declare varaibles
   int dollarAmnt;
   int dollarRem;

   int input;

   //accept input 
   cout << "Please, enter the number of pennies to be converted: ";
   cin >> input;//7333

   //process input 
   dollarAmnt = input/100;
   dollarRem = input % 100;

   int quarterAmnt = dollarRem/25;
   int quarterRem = dollarRem % 25;

   int dimeAmnt = quarterRem/10;
   int dimeRem = quarterRem % 10;

   int nickelAmnt = dimeRem/5;
   int nickelRem = dimeRem % 5;

   int penniesLeft = nickelRem; 

   //display output 
   cout << "The dollar amount is: " << dollarAmnt << endl;

   cout << "The quarter amount is: " << quarterAmnt << endl;

   cout << "The dime amount is: " << dimeAmnt << endl;

   cout << "The nickel amount is: " << nickelAmnt << endl;

   cout << "The pennie amount is: " << nickelRem << endl;
   
   return 0;

}
