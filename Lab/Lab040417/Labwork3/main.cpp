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
           
    float ex=1.0f,tol=1e-7f,x;
    for(float i=1.0f,term=1.0f;  term>=tol;  term*=(x/i), ex+=term, i++);
    cout<<"e^"<<x<<" = "<<ex<<endl;
        
    
    
    return 0;
}


