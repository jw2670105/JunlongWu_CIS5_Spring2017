/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
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
    unsigned int BooksPurchased;

    //Input data
    cout << "Please enter the number of books you purchased month, To calculate your monthly awarded points."<<endl;
	cin  >> BooksPurchased;
        
    //Map inputs to outputs or process the data
   
    //Output the transformed data
    switch (BooksPurchased)
	{
		case 0  : cout << "You have earned 0 points for this month.\n";
					break;
		case 1	: cout << "You have earned 5 points for this month.\n";
					break;
		case 2	: cout << "You have earned 15 points for this month.\n";
					break;
		case 3	: cout << "You have earned 30 points for this month.\n";
					break;
		default : cout << "You have earned 60 points for this month.\n";		
	}
    //Exit stage right!
    return 0;
}

