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
    const int CALORIES_PER_COOKIE = (300 * 10) / 40;
		  int CookiesAte,
		  	  Calories;

    //Initialize variables
    
    //Input data
    cout << "Enter how many cookies you ate and this program\n";
	cout << "will calculate how many total calories were consumed: ";
	cin  >> CookiesAte;


    //Map inputs to outputs or process the data
    Calories = CookiesAte * CALORIES_PER_COOKIE;

    //Output the transformed data
    cout << "You consumed a total of " << Calories << " calories.\n";
    
    //Exit stage right!
    return 0;
}

