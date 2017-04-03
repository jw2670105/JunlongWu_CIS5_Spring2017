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
    int Test, 		
		Sum = 0;	
    //Initialize variables

    //Input data
    cout << "This program will return the sum of all the"
		 << "integers from 1 up to the number you enter."
		 << "Enter a positive integer: "<<endl;
	cin  >> Test;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    if (Test > 0) 
	{
		for (int Num = 1; Num <= Test; Num++)
		{
			Sum += Num;
		}
		cout << "The sum of the integers from 1 up to "
			 << Test << " = " << Sum << endl;
	}
    //Exit stage right!
    return 0;
}

