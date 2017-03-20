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
    float Weight, Mass;

    //Input data
    cout << "Calculate the weight of an object "<<endl;
    cout<< "Enter the object's mass: ";
        
    //Map inputs to outputs or process the data
     Weight = Mass * 9.8;   
    //Output the transformed data
    cout << "This object weights " << Weight << " newtons."<<endl;
	if (Weight > 1000)
		cout << "too heavy"<<endl;
	else if (Weight < 10)
		cout << "too light!"<<endl;
    //Exit stage right!
    return 0;
}

