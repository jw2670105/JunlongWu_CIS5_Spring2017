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
    //Declare the ascii limit
    int limit=127;
    
    //Map inputs to outputs or process the data
    for(int i=0;i<=limit;i++){
        cout<<static_cast<char>(i);
        if(i%16==15)cout<<endl;
    }

    //Exit stage right!
    return 0;
}


