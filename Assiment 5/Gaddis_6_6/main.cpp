/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

// Function Prototypes
float kineticEnergy(int, int);

int main()
{
	int Mass, Velo;		
        
	cout << "Enter the object’s mass (in kilograms): ";
	cin  >> Mass;
	cout << "Enter the object’s velocity (in meters per second): ";
	cin  >> Velo;
	cout << "This object has is "
		 << kineticEnergy(Mass, Velo) << " joules." << endl;
	return 0;
}


float kineticEnergy(int Mass, int Velo)
{   
	return .5 * Mass * pow(Velo, 2);
}
