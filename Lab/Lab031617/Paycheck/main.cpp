/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on March 16th, 2017, 11:26 AM
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
    float hours;
    float paycheck;
    //Initialize variables
    
    //Input data
    cout<<"Type in the hours"<<endl;
    cin>>hours;
    
    //Map inputs to outputs or process the data
    if(hours<=40)paycheck=10*hours;
    if(hours>40) paycheck=10*hours+10*(hours-40);
    //Output the transformed data
    cout<<"workhours is = "<<hours<<" paycheck is "<<paycheck<<endl;
    //Exit stage right!
    return 0;
}


