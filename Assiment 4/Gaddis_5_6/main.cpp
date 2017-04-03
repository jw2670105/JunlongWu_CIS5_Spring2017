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
    int Speed,
		Hours,
		Distance = 0;
	float YrRate;
    //Initialize variables
        
    //Input data
    cout << "What is the speed of the vehicle in mph? "<<endl;
    cin  >> Speed;
    cout << "How man hours has it traveled? "<<endl;
    cin  >> Hours;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    if (Speed >= 0 && Hours >= 1)
	{
		cout << "Hour   Distance Traveled"<<endl;
                for (int X = 1; X <= Hours; X++)
		{
			
			Distance += Speed;
			cout << right << setw(4) << X << "        ";
			cout << setw(6) << Distance << endl;
		}
    }
    //Exit stage right!
    return 0;
}

