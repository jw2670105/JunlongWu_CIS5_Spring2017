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
    int Month, Day, Year;

    //Input data
    cout << "Enter a month, a day, and a two digit year, and the program will determine if the date is magic."<<endl;
	cout << "Enter a month: "<<endl;
	cin  >> Month;
	cout << "Enter a day: "<<endl;
	cin  >> Day;
	cout << "Enter a Year"<<endl;
	cin  >> Year;
        
    //Map inputs to outputs or process the data
    if (Year == Month * Day)
		cout << "The date is magic"<<endl;
	else
		cout << "The date is not magic"<<endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

