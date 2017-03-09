/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on March 5, 2017, 11:22 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float RentAndMortgage,
		   Utilities,
		   Phone,
		   Cable,
		   MontlyCost,
		   YearlyCost;

    //Initialize variables
    
    //Input data
    cout << "This program will calculate your\n";
    cout << "montly and yearly housing expenses.\n";
    cout << "Enter your rent or mortgage payment cost: ";
    cin  >> RentAndMortgage;
    cout << "Enter the cost of your utilities: ";
    cin  >> Utilities;
    cout << "Enter your monthly phone cost: ";
    cin  >> Phone;
    cout << "Enter your montly cable cost: ";
    cin  >> Cable;
    //Map inputs to outputs or process the data
    MontlyCost = RentAndMortgage + Utilities + Phone + Cable;
    YearlyCost = MontlyCost * 12;

    //Output the transformed data
    cout << "Total montly cost of expenses: $";
    cout << fixed << showpoint << setprecision(2);
    cout << setw(10) << MontlyCost << endl;
    cout << "Total yearly cost of expenses: $";
    cout << setw(10) << YearlyCost << endl;
    //Exit stage right!
    return 0;
}

