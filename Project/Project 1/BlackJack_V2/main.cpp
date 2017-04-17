/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on April 11, 2017, 17:42 PM
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
  
    char choice;    
   
    do{
   
        cout<<"Type 1 to hit and type 2 to stand"<<endl;
        cin>>choice;
        
        
        switch(choice){
            case '1':  
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
                cout<<"Your total is "<<totalP1<<endl;  
                if (totalP1>21) {
                    cout<<"You bust "<<endl;
                    cout<<"Your opponent's total is "<<totalP2<<endl;                                       
                        exit(0);
                                       
                }
                if (totalP2<18) {
                    totalP2=totalP2+rand()%13+1;
                        if (totalP2>21){
                        cout<<"Your opponent bust, and you win "<<endl;
                        cout<<"Your opponent's total is "<<totalP2<<endl;
                        exit(0);
                        
                    }
                }
                else if (totalP1==21) {
                    cout<<"You win "<<endl;
                    exit(0);
                }
                else if (totalP2==21) {
                    cout<<"Your opponent win "<<endl;
                    exit(0);
                }
        
                
                break;
            case '2': 
                cout<<"Your opponent's total is "<<totalP2<<endl;
                if (totalP1<totalP2) {
                    if (totalP2>21){
                        cout<<"Your opponent bust, and you win "<<endl;
                        exit(0);
                    }
                    cout<<"You lose "<<endl;
                    exit(0);
                }
                else if (totalP1>totalP2) {
                    cout<<"You win "<<endl;
                    exit(0);
                }
                else if (totalP1==totalP2) {
                    cout<<"You tie "<<endl;
                    exit(0);
                }
                break;
            default:{
                cout<<"You press the wrong number "<<endl;
                return 0;
            }
        }
    }while(1);
    


    
    
    //Exit stage right!
    return 0;
}

