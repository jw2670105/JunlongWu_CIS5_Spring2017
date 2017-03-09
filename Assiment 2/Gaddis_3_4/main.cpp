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
    const float PERCENT_INSURE = .80;
    float ReplacementCost,
	   MinInsurance;

    //Initialize variables
    
    //Input data
    cout << "To calculate the minimum amount of insurance\n";
    cout << "that should be purchased for the property.\n";
    cout << "enter the building's replacement cost ";
    cin  >> ReplacementCost;
    //Map inputs to outputs or process the data
    MinInsurance = ReplacementCost * PERCENT_INSURE;

    //Output the transformed data
    cout << "The minimum amount of insurance that should be\n";
    cout << "purchased for this property is $";
    cout << fixed << showpoint << setprecision(2) << MinInsurance << endl;
    //Exit stage right!
    return 0;
}

