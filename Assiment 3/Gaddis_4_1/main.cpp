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
    float number1, number2;

    //Input data
    cout << "Enter two numbers and I will determine which"<<endl;
	cout << "number is the smaller and which is the larger."<<endl;
	cout << "Enter the first number: ";
	cin  >> number1;
	cout << "Enter the secong number: ";
	cin  >> number2;
        
    //Map inputs to outputs or process the data
    if (number1 < number2)
		cout << number1 << " is smaller than " << number2 <<endl;
	else
		cout << number2 << " is smaller than " << number1 <<endl;
	return 0;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

