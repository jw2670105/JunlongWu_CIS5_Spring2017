/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
float celsius(int);

int main()
{
	cout << "Table of Fahrenheit temperatures 0 - 20 "
		 << "and their Celsius equivalents."<<endl;
        cout<< "------------------------------"<<endl;
        cout<< "  Fahrenheit       Celsius"<<endl;
	cout<< "------------------------------"<<endl;
    
	for (int F = 0; F <= 20; F++)
	{
		cout << "      " << setw(2) << F;
		cout << "          "
			 << setw(3) << celsius(F) << endl;
	}
	cout << endl;
	return 0;
}
float celsius(int F)
{
	
	return (5.0 * (F - 32))/9;
}
