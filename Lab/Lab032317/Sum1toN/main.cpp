/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on March 23th, 2017, 11:45 AM
 * Purpose:  Sum 1 to N
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    //Make sure 0<=n<=40000
    int n=40000,sum=0;
    
    //Input data
    
    //Map inputs to outputs or process the data
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    //Output the transformed data
    cout<<"The computed sum of 1 to "<<n<<" = "<<sum<<endl;
    cout<<"and "<<n<<"*("<<n<<"+1)/2="<<n*(n+1)/2<<endl;
    //Exit stage right!
    return 0;
}

