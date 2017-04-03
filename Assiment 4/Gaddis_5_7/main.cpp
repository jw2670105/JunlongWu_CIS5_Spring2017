/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
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
    int Day,
		Worked,
		DailyPay = 1,
		Total = 0;

	float YrRate;
    //Initialize variables
        
    //Input data
    cout << "How many days did the employee work? "<<endl;
	cin  >> Worked;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"   Day         Salary"<<endl;
    for(Day = 1; Day <= Worked; Day++)
	{
		
		cout << right << setw(5) << Day;
		cout << left << fixed << showpoint << setprecision(2)
		     << "           " << "$" << DailyPay << endl;
		Total += DailyPay;
		DailyPay *= 2;
	}
    //Exit stage right!
    return 0;
}

