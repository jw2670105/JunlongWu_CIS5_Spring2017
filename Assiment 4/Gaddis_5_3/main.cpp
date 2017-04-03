/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
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
    int Year;
    float Risen = 0.0;
    //Initialize variables
        cout<< "    Year        Amount Risen"<<endl;
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for(Year = 1; Year <= 25; Year++)
	{
		Risen += 3.1;
		cout << right << fixed << showpoint << setprecision(1)
		     << setw(7) << Year << setw(16) << Risen << endl;
	}
    //Exit stage right!
    return 0;
}

