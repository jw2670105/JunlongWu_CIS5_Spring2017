/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on March 14th, 2017, 11:32 AM
 * Purpose:  Time calculator/converter
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int MINUTE=60;
const int HOUR=60*MINUTE;
const int DAY=24*HOUR;
const int WEEK=7*DAY;
const int YEAR=52*WEEK;
const int MONTH=YEAR*13/3.0f;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int nSecs;
    int nYrs,nMonths,nWks,nDys,nHrs,nMin;
    
    //Initialize variables
    cout<<"This program converts seconds to Years/Months/Weeks/Days/Hours"<<endl;
    cout<<"Input the number of seconds for the conversion/equivalence"<<endl;
    cin>>nSecs;
    
    //Map inputs to outputs or process the data
    nYrs=nSecs/YEAR;
    cout<<nYrs<<" Years (";
    nSecs-=nYrs*YEAR;
    
    nWks=nSecs/WEEK;
    cout<<nWks<<" Weeks or ";
    nMonths=nWks*13/3;
    cout<<nMonths<<" Months ) ";
    nSecs-=nWks*WEEK;
    
    nDys=nSecs/DAY;
    cout<<nDys<<" Days ";
    nSecs-=nDys*DAY;
    
    nHrs=nSecs/HOUR;
    cout<<nHrs<<" Hours ";
    nSecs-=nHrs*HOUR;
    
    nMin=nSecs/MINUTE;
    cout<<nMin<<" Minutes ";
    
    nSecs-=nMin*MINUTE;
    cout<<nSecs<<" Seconds ";
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

