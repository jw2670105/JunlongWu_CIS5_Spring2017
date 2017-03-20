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
    float Length1, Length2, Width1, Width2, Area1, Area2;

    //Input data
    cout << "This program determines which of two rectangles has the greater area, or if the areas are the same."<<endl;
	cout << "Enter the length of the rectangle 1"<<endl;
	cin  >> Length1;
        cout<< "Enter the width of rectangle 1"<<endl;
        cin>>Width1;
	cout << "Enter the length of the rectangle 2"<<endl;
	cin  >> Length2;
        cout<< "Enter the width of rectangle 2"<<endl;
        cin>>Width2;
        
    //Map inputs to outputs or process the data
    Area1 = Length1 * Width1;
	Area2 = Length2 * Width2;
    //Output the transformed data
    if (Area1 == Area2)
		cout << "The areas of both rectangle’s are the same."<<endl;
	else if (Area1 > Area2)
		cout << "The area of rectangle 1 is greater than rectangle 2."<<endl;
	else
		cout << "The area of rectangle 2 is greater than rectangle 1."<<endl;
    //Exit stage right!
    return 0;
}

