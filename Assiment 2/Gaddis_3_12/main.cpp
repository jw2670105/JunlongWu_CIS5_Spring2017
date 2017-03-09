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
    const float YEN_PER_DOLLAR   = .952,
		EUROS_PER_DOLLAR = .7175;
		  float USd,
		  	 Yen,
		  	 Euros;
    //Initialize variables
    
    //Input data
    cout << "To convert a U.S. dollar amount to Japanese yen\n";
	cout << "and euros enter a amount in U.S. dollar: ";
	cin  >> USd;


    //Map inputs to outputs or process the data
    Yen = USd * YEN_PER_DOLLAR;
    Euros = USd * EUROS_PER_DOLLAR;

    //Output the transformed data
    cout << "$" << USd << " U.S. dollar is equivalent to ";
    cout << Yen << " Yen and " << Euros << " Euros.\n";
    
    //Exit stage right!
    return 0;
}

