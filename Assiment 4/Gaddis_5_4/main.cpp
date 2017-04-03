/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
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
    const float CALORIES_PER_MIN = 3.9;
    int Min,
		Burnt = 0; 
    //Initialize variables
        
    //Input data
    cout<< "   Minutes Ran      Calories Burnt"<<endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for(Min = 10; Min <= 30; Min += 5)
	{
		Burnt = Min * CALORIES_PER_MIN;
		cout << "        "<< Min << "               " << Burnt << endl; 
	}
	cout << endl;
    //Exit stage right!
    return 0;
}

