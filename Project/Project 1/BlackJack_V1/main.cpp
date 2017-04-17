/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on April 8, 2017, 18:22 PM
 * Purpose:  BlackJack Game
 */

//System Libraries
#include <iostream> 
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int ncP1,ncP2,totalP1,totalP2,suit;
    string suitP1,suitP2;
    cout<<"Welcome to Black Jack game"<<endl;
    cout<<"Your hand is"<<endl;
    ncP1= rand()%13+1;
    suit=rand()%4;
    if (suit==0){
        suitP1="diamond";
    }
    else if (suit==1){
        suitP1="heart";
    }
    else if (suit==2){
        suitP1="clover";
    }
    else if (suit==3){
        suitP1="spade";
    }
    cout<<suitP1<<" "<<ncP1<<endl;
    if (ncP1==11||ncP1==12||ncP1==13){
        totalP1=10;
    }
    else {
        totalP1=ncP1;
    }
    ncP1= rand()%13+1;
    suit=rand()%4;
    if (suit==0){
        suitP1="diamond";
    }
    else if (suit==1){
        suitP1="heart";
    }
    else if (suit==2){
        suitP1="clover";
    }
    else if (suit==3){
        suitP1="spade";
    }
    cout<<suitP1<<" "<<ncP1<<endl;
  if (ncP1==11||ncP1==12||ncP1==13){
        totalP1=10+totalP1;
    }
    else {
        totalP1+=ncP1;
    }
    cout<<"The total is "<<totalP1<<endl;
    totalP2=rand()%19+2;   
  
    
    



    
    
    //Exit stage right!
    return 0;
}

