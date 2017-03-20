/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    //Declare variables
    const float PI = 3.14159;
    int    Input;
    double Radius, 
	   Length,
	   Width, 
	   Base, 
	   Height,
	   Area;

    //Input data
    cout << "Geometry Calculator"<<endl;
    cout << "    1. Calculate the Area of a Circle"<<endl;
    cout << "    2. Calculate the Area of a Rectangle"<<endl;
    cout << "    3. Calculate the Area of a Triangle"<<endl;
    cout << "    4. Quit"<<endl;
    cin  >> Input;
        
    //Map inputs to outputs or process the data
       
    //Output the transformed data
    switch(Input)
    {
    	case 1 : cout << "Enter the radius of the circle: ";
    			 cin  >> Radius;
    			 Area = PI * pow(Radius, 2);
    			 cout << "The area of the cirle is " << Area << endl;
    			 break;

    	case 2 : cout << "Enter the length of the rectangle: ";
    			 cin  >> Length;
    	         cout << "Enter the width of the rectangle: ";
    	         cin  >> Width;
    	         Area = Length * Width;
    	         cout << "The area of the rectangle is " << Area << endl;
    	         break;

    	case 3 : cout << "Enter the base of the triangle: ";
    			 cin  >> Base;
    			 cout << "Enter the height of the triangle: ";
    			 cin  >> Height;
    			 Area = Base * Height;
    			 cout << "The area of the triangle is " << Area << endl;
    			 break;

    	case 4 : cout << "Exiting Geometry Calculator"<<endl;
    			 break;

    	default: cout << "Invalid Entry!"<<endl;
    }
    //Exit stage right!
    return 0;
}

