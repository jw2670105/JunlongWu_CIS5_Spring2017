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
    
    int Num[10]={};
    int temp;
    cout<<"Type 10 numbers "<<endl;
    for(int a=0;a<10;a++){
        cin>>Num[a];
    }
    for(int pos=0;pos<9;pos++){
        for(int indx=pos+1;indx<10;indx++){
            if(Num[pos]>Num[indx]){
                temp=Num[pos];
                Num[pos]=Num[indx];
                Num[indx]=temp;
            }
        }
    }
 
    cout<<"Largest:"<<Num[9]<<endl;
    cout<<"Smallest:"<<Num[0]<<endl;
 

}

