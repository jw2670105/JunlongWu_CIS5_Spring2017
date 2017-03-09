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
    float TimesAtBat,
           Hits,
	   Average;

    //Initialize variables
    
    //Input data
    cout << "This program can calculate batting average.\n";
    cout << "Enter the number of times the player was at bat: ";
    cin  >> TimesAtBat;
    cout << "Enter the number of hits he got: ";
    cin  >> Hits;
    //Map inputs to outputs or process the data
    Average = Hits / TimesAtBat;

    //Output the transformed data
    cout << "The player's batting average is: ";
    cout << fixed << showpoint << setprecision(4) << Average << endl;
    
    //Exit stage right!
    return 0;
}

