/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on March 23th, 2017, 12:07 PM
 * Purpose:  Menu to be utilized on Hmwk 4.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Show menu and loop
    do{
       //Display Menu
        cout<<"Type 1 for sum 1 to n Problem"<<endl;
        cout<<"Type 2 for sum 0.1 error Problem"<<endl;
        cout<<"Type 3 for problem 3"<<endl;
        cout<<"Type 4 for problem 4"<<endl;
        cout<<"Type 5 for problem 5"<<endl;
        cout<<"Type 6 for problem 6"<<endl;
        cout<<"Type 7 for problem 7"<<endl;
        cout<<"Type 8 for problem 8"<<endl;
        cout<<"Type 8 for problem 9"<<endl;
        
        //Input the choice
        cout<<"Problem ";
        cin>>choice;
        
        
        //Place solutions to problems in switch statement
        switch(choice){
            case'1':
            case'2':
            case'3':{
                cout<<"In problem solution 3"<<endl;
                break;
        }
            case'4':{
                cout<<"In problem solution 4"<<endl;
                break;
        }
            case'5':{
                cout<<"In problem solution 5"<<endl;
                break;
        }        
            case'6':{
                cout<<"In problem solution 6"<<endl;
                break;
        }            
            case'7':{
                cout<<"In problem solution 7"<<endl;
                break;
        }             
            case'8':{
                cout<<"In problem solution 8"<<endl;
                break;
        }                   
            case '9':{
                cout<<"In problem solution 9"<<endl;
                break;
        }
            default: {
                cout<<"Exit program"<<endl;          
            }
                
        }
        
    }while(choice>='1'&&choice<='9');
    
    //Initialize variables
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

