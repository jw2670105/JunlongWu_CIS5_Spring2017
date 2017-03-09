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
    float C,F;
    //Initialize variables
    
    //Input data
    cout << "To convert the temperature from Celsius to Fahrenheit\n";
	cout << "Enter the temperature in Celsius: ";
	cin  >> C;



    //Map inputs to outputs or process the data
    F = (9/5 * C) + 32;

    //Output the transformed data
    cout << F << "F\n";
    
    //Exit stage right!
    return 0;
}

