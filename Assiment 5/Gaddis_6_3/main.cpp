/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function Prototypes
float getSales(string);
void findHighest(float, float, float, float);

int main()
{
	float NE, SE, NW, SW;
	
	NE = getSales("Northeast");
	SE = getSales("Southeast");
	NW = getSales("Northwest");
	SW = getSales("Southwest");

	findHighest(NE, SE, NW, SW);
	return 0;
}

float getSales(string Division)
{
	float Sales;

	do
	{
		cout << "What is the " << Division;
    	cout << " division's quarterly sales figure? ";
    	cin  >> Sales;

    	if (Sales < 0.00)
    	cout << "Error! Invaid sales figure.\n"
    		 << "Dollar amount must be greater than $0.00\n";

    } while (!(Sales > 0.00));
    return Sales;
}

void findHighest(float NE, float SE, float NW, float SW)
{
	double Hightest;
 
 	cout << "The Hightest grossing division is the ";

	if (NE > SE && NE > NW && NE > SW)
	{
		Hightest = NE;
		cout << "Northeast ";
	}
	else if (SE > NE && SE > NW && SE > SW)
	{
		Hightest = SE;
		cout << "Southeast ";
	}
	else if (NW > SE && NW > NE && NW > SW)
	{
		Hightest = NW;
		cout << "Northwest ";
	}
	else
	{
		Hightest = SW;
		cout << "Southwest ";
	}
    
	cout << fixed << showpoint << setprecision(2);
	cout << "division with $" << Hightest << " in sales."<<endl;
}
