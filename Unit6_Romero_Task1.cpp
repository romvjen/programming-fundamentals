#include <algorithm>
#include <iostream>
#include <fstream>
#include "accounts.h"

#define SIZE 2010

using namespace std;

//function prototype
void bubbleSortASC(int[], int);

int main()
{
    //initialize time variables
    double cpuStartTime = 0.0;
    double cpuEndTime = 0.0;

    //print program run time
    cpuStartTime = cpuTime();
    cout << "The start time is: " << cpuStartTime << endl;
  
    //function call to print
    bubbleSortASC(accountBalances, maxAccounts);

    //program end time
    cpuEndTime = cpuTime();
    cout << "The end time is: " << cpuEndTime << endl;

    //log run times
    ofstream outFile;
    outFile.open("Results.txt", ofstream::app);

    outFile << "Start Time: " << cpuStartTime << "-->" << " End Time: " << cpuEndTime << endl;

}

//function definiton
void bubbleSortASC(int array[], int arrSize)
{
    int temp = 0;

    for(int i = 0; i < arrSize; i++) //first num to be compared
    {
        for(int j = 0; j < arrSize; j++) //second num to be compared
        {
            if(array[i] < array[j]) //if first num is less than the second, swap
            {
                temp = array[i];
                array[i] = array[j];                array[j] = temp;
            }
        }
    }

    cout << "\nThe following accounts have been sorted in an ascending order." << endl;

    //print out sorted accounts
    cout << "\nSorted accounts from our bubblesort code\n";
    for(int i = 0; i < arrSize; i++)
    {
        cout << array[i] << endl;
    }

}

