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
    const float MONTHLYCHARGE = 10;
    int ChecksWritten;
    double BankFees;

    //Input data
    cout << "Compute your bank's fees for the month."<<endl;
    cout << "Enter the number of checks written during the past month: "<<endl;
    cin  >> ChecksWritten;
        
    //Map inputs to outputs or process the data
       
    //Output the transformed data
    if (ChecksWritten >= 0)
	{
		cout << fixed << showpoint << setprecision(2);
		if (ChecksWritten < 20)
		{
			BankFees = MONTHLYCHARGE + (ChecksWritten * 1.10);
			cout << "Bank's fee for the month: $" << BankFees << endl;
		}
		else if (ChecksWritten < 40)
		{
			BankFees = MONTHLYCHARGE + (ChecksWritten * 1.08);
			cout << "Bank's fee for the month: $" << BankFees << endl;
		}
		else if (ChecksWritten < 60)
		{
			BankFees = MONTHLYCHARGE + (ChecksWritten * 1.06);
			cout << "Bank's fee for the month: $" << BankFees << endl;
		}
		else
		{
			BankFees = MONTHLYCHARGE + (ChecksWritten * 1.04);
			cout << "Bank's fee for the month: $" << BankFees << endl;
		}
	}
	else
	{	
		cout << "Invalid input! Nuber of checks cannot be less then 0."<<endl
			 << "Please run the program again and enter a valid number."<<endl;
	}
    //Exit stage right!
    return 0;
}

