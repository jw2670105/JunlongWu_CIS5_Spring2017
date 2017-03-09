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
    float  Score1,
	   Score2,
	   Score3,
	   Score4,
	   Score5,
	   Average;

    //Initialize variables
    
    //Input data
    cout << "Enter five test scores (separated by spaces only)\n";
    cout << "and this program will calculate the average test score.\n";
    cin  >> Score1 >> Score2 >> Score3 >> Score4 >> Score5;

    //Map inputs to outputs or process the data
    Average = (Score1 + Score2 + Score3 + Score4 + Score5) / 5;

    //Output the transformed data
    cout << "The average test score is ";
    cout << fixed << showpoint << setprecision(1) << Average << endl;
    
    //Exit stage right!
    return 0;
}

