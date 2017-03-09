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
    const float WEIGHT_PER_WIDGET = 9.2;

    float PalletWeight,
	   FullWeight;
    int	   NumOfWidgets;

    //Initialize variables
    
    //Input data
    cout << "How much does the pallet weigh by itself? ";
    cin  >> PalletWeight;
    cout << "How much does the pallet weigh with the widgets? ";
    cin  >> FullWeight;

    //Map inputs to outputs or process the data
    NumOfWidgets = (FullWeight - PalletWeight) / WEIGHT_PER_WIDGET;

    //Output the transformed data
    cout << "There are " << NumOfWidgets << " widgets stacked on the pallet.\n";
    
    //Exit stage right!
    return 0;
}

