/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

// Function Prototypes
int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main()
{
	int North, South, East, West, Central;

	
	North   = getNumAccidents("North");
	South   = getNumAccidents("South");
	East    = getNumAccidents("East");
	West    = getNumAccidents("West");
	Central = getNumAccidents("Central");

	
	findLowest(North, South, East, West, Central);

	return 0;
}


int getNumAccidents(string Region)
{
	int Accidents;

	do
	{
		cout << "How many traffic accidents were reported in the "
			 << Region << " region during last year? ";
		cin  >> Accidents;

		if (Accidents < 0)
		{
			cout << "Invalid report! "
				 << "Accident number must be greater than 0."<<endl;
		}

	} while (!(Accidents > 0));
    cout << endl;
	return Accidents;
}


void findLowest(int North, int South, int East, int West, int Central)
{
	int Lowest;

	cout << "The fewest reported traffic accidents last year were in the ";

	if(North < South   &&
	   North < East    &&
	   North < West    &&
	   North < Central)
	{
		Lowest = North;
		cout << "North ";
	}
	else if(South < North   &&
	   		South < East    &&
	   		South < West    &&
	   		South < Central)
	{
		Lowest = South;
		cout << "South ";
	}
	else if(East < North   &&
	   		East < South   &&
	   		East < West    &&
	   		East < Central)
	{
		Lowest = East;
		cout << "East ";
	}
	else if(West < North   &&
	   		West < East    &&
	   		West < South   &&
	   		West < Central)
	{
		Lowest = West;
		cout << "West ";
	}
	else
	{
		Lowest = Central;
		cout << "Central ";
	}

	cout << "region which had " << Lowest << " reported traffic accidents."<<endl;
}