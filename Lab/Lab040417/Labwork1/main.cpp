/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on April 4th, 2017, 12:00 PM
 * Purpose:  Lab work
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    for(int j=1;j<=6;j++){
        int fact=1,n;
        cin>>n;
        for(int i=1;i<=n;i++){
            fact*=i;
     }  
        cout<<fact<<endl;
    }
    //Exit stage right!
    return 0;
}


