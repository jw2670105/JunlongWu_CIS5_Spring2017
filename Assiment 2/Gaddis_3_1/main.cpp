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
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float Gallons, Miles, MilesPerGallon;
    //Initialize variables
    
    //Input data
    cout << "This program caluclates how many miles per gallon your car gets\n";
    cout << "Enter the number of gallons of gas your car can hold: ";
    cin  >> Gallons;
    cout << "Enter the number of miles your car can be driven on a full tank: ";
    cin  >> Miles;
    //Map inputs to outputs or process the data
    MilesPerGallon = Miles / Gallons;
    //Output the transformed data
    cout << "This car gets " << MilesPerGallon << " miles per gallon.\n";
    //Exit stage right!
    return 0;
}

