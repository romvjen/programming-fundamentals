#include <algorithm>
#include <iostream>
#include <fstream>
#include "accounts.h"

#define SIZE 2010

using namespace std;

//function prototype
void printArray(int[], int);

int main()
{
    //initialize time variables
    double cpuStartTime = 0.0;
    double cpuEndTime = 0.0;

    //print program run time
    cpuStartTime = cpuTime();
    cout << "The start time is: " << cpuStartTime << endl;
  
    //function call to built in sort
    sort(accountBalances, accountBalances + maxAccounts);

    //program end time
    cpuEndTime = cpuTime();
    cout << "The end time is: " << cpuEndTime << endl;

    //print and log run times
    printArray(accountBalances, maxAccounts);

    ofstream outFile;
    outFile.open("Results.txt", ofstream::app);

    outFile << "Start Time: " << cpuStartTime << "-->" << " End Time: " << cpuEndTime << endl;

}

//function definiton
void printArray(int array[], int arrSize)
{
   //print out sorted accounts
   cout << "\nThe following accounts are sorted in ascending order using the built in sorting function \n";
   for(int accounts : accountBalances)
   {
    cout << accounts << "\n";
   }

}
