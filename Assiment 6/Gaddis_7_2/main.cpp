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
    
    double Num[12]={};
    int temp;
    double total=0;
    double Ave;
    cout<<"Type 12 numbers "<<endl;
    for(int a=0;a<12;a++){
        cin>>Num[a];
    }
    for(int pos=0;pos<11;pos++){
        for(int indx=pos+1;indx<12;indx++){
            if(Num[pos]>Num[indx]){
                temp=Num[pos];
                Num[pos]=Num[indx];
                Num[indx]=temp;
            }
        }
    }
    for(int pos=0;pos<12;pos++){
        total=total+Num[pos];
    }
    Ave=total/12;
    cout<<"Largest:"<<Num[11]<<endl;
    cout<<"Smallest:"<<Num[0]<<endl;
    cout<<"Total:"<<total<<endl;
    cout<<"Average:"<<Ave<<endl;
}

