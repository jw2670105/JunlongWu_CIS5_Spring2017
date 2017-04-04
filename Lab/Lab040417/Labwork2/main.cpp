/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on April 4th, 2017, 12:00 PM
 * Purpose:  Lab work
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    float x;
     cin>>x;
    float etox=1;
    for(int n=1;n<=13;n++){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        etox+=pow(x,n)/fact;
    }
    cout<<"e^"<<x<<" = "<<etox<<endl;
        
    
    
    return 0;
}


