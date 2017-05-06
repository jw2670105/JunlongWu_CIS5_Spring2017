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
float calculateRetail(float,float); 
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float wholesalecase, markup, retail;
    //Initialize variables
    
    //Input data
    cin>>wholesalecase>>markup;
    cout<<endl;
    retail = calculateRetail(wholesalecase,markup);
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"The whole sale price is "<<wholesalecase<<endl;
    cout<<"The markup is "<<markup<<" %"<<endl;
    cout<<"The retail price is "<<retail<<endl;
    //Exit stage right!
    return 0;
}
float calculateRetail(float wc,float mu){
    float sum;
    sum = wc+(wc*mu/100);
    return sum;
}

