/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const float GRAVITY = 9.8;

// Function prototypes
float fallingDistance(int);

int main()
{
 	cout << "    Time        Distance"<<endl;
 	cout << "(in seconds)   (in meters)"<<endl;
 	cout << "---------------------------"<<endl;

 	for(int T = 1; T <= 10; T++)
 	{
 		cout << "    " << setw(3) << T << "           "
 			 << fixed << setprecision(0) << setw(4) 
 			 << fallingDistance(T) << endl;
 	}
 	cout << endl;
 	return 0;
}

float fallingDistance(int T)
{
	return .5 * GRAVITY * pow(T, 2);
}

