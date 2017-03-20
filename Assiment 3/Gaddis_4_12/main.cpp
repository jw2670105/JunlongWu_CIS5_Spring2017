/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    //Declare variables
    string Runner1;
    string Runner2;
    string Runner3;
    float RunTime1, RunTime2, RunTime3;


    //Input data
    cout << "To calculate the placement of the runners"<<endl;
    cout << "Input the requested information."<<endl;
	cout << "What is the name of the fist runner? "<<endl;
	cin  >> Runner1;
	cout << "How long did " << Runner1 << " take to finish the race? "<<endl;
	cin  >> RunTime1;
	cout << "What is the name of the second runner? "<<endl;
	cin  >> Runner2;
	cout << "How long did " << Runner2 << " take to finish the race? "<<endl;
	cin  >> RunTime2;
	cout << "What is the name of the third runner? "<<endl;
	cin  >> Runner3;
	cout << "How long did " << Runner3 << " take to finish the race? "<<endl;
	cin  >> RunTime3;
        
    //Map inputs to outputs or process the data
       
    //Output the transformed data
    if (RunTime1 > 0 && RunTime2 > 0 && RunTime3 > 0)
		if (RunTime1 < RunTime2 && RunTime1 < RunTime3)
			if (RunTime2 < RunTime3)
			{
				cout << "First place : " << Runner1 <<endl;
				cout << "Second place: " << Runner2 <<endl;
				cout << "Third place : " << Runner3 <<endl;
			}
			else 
			{
				cout << "First place : " << Runner1 <<endl;
				cout << "Second place: " << Runner3 <<endl;
				cout << "Third place : " << Runner2 <<endl;
			}
		else if (RunTime2 < RunTime1 && RunTime2 < RunTime3)
			if (RunTime1 < RunTime3)
			{
				cout << "First place : " << Runner2 <<endl;
				cout << "Second place: " << Runner1 <<endl;
				cout << "Third place : " << Runner3 <<endl;
			}
			else
			{
				cout << "First place : " << Runner2 <<endl;
				cout << "Second place: " << Runner3 <<endl;
				cout << "Third place : " << Runner1 <<endl;
			}
		else 
			if (RunTime1 < RunTime2)
			{
				cout << "First place : " << Runner3 <<endl;
				cout << "Second place: " << Runner1 <<endl;
				cout << "Third place : " << Runner2 <<endl;
			}
			else
			{
				cout << "First place : " << Runner3 <<endl;
				cout << "Second place: " << Runner2 <<endl;
				cout << "Third place : " << Runner1 <<endl;
			}
	else
		cout << "Invalid time input! Times can not be less than zero."<<endl;
	        
    //Exit stage right!
    return 0;
}

