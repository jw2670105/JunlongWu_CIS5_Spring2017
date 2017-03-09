/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on March 5, 2017, 11:22 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const float COST_A = 15,
	         COST_B = 12,
	         COST_C =  9;
    float TicketsSoldA,
	   TicketsSoldB,
	   TicketsSoldC,
	   Income;
    //Initialize variables
    
    //Input data
    cout << "Enter the number of tickets sold for Class A seats: ";
    cin  >> TicketsSoldA;
    cout << "Enter the number of tickets sold for Class B seats: ";
    cin  >> TicketsSoldB;
    cout << "Enter the number of tickets sold for Class C seats: ";
    cin  >> TicketsSoldC;
    //Map inputs to outputs or process the data
    Income = (TicketsSoldA * COST_A) + (TicketsSoldB * COST_B) + (TicketsSoldC * COST_C);
    //Output the transformed data
    cout << "Total amoumt of income generated = $";
    cout << fixed << showpoint << setprecision(2) << Income << endl;
    //Exit stage right!
    return 0;
}

