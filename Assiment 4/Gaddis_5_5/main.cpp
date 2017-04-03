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
    const float RATE = 0.04,
				 CURRENT_CHARGE = 2500.0;
    int Year;
	float YrRate;
    //Initialize variables
        
    //Input data
    cout<< "      Year       Rate"<<endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for(Year = 1; Year <= 6; Year++)
	{
		YrRate = CURRENT_CHARGE * (1 + Year * RATE);
		cout << "       " << Year << "         " << YrRate << endl;
	}
	cout << endl;
    //Exit stage right!
    return 0;
}

