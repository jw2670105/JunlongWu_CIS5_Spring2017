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
    int num;

    //Input data
    cout << "Enter a number within the range of 1 through 10,\n";
	cout << "and I will display the Roman numeral version of that number.\n";
	cin  >> num;
        
    //Map inputs to outputs or process the data
   
    //Output the transformed data
    switch(num)
	{
		case 1  : cout << "The Roman numeral version of " << num << " is I."<<endl;
							break;
		case 2  : cout << "The Roman numeral version of " << num << " is II."<<endl;
							break;
		case 3  : cout << "The Roman numeral version of " << num << " is III."<<endl;
							break;
		case 4  : cout << "The Roman numeral version of " << num << " is IV."<<endl;
							break;
		case 5  : cout << "The Roman numeral version of " << num << " is V."<<endl;
							break;
		case 6  : cout << "The Roman numeral version of " << num << " is VI."<<endl;
							break;
		case 7  : cout << "The Roman numeral version of " << num << " is VII."<<endl;
							break;
		case 8  : cout << "The Roman numeral version of " << num << " is VIII."<<endl;
							break;
		case 9  : cout << "The Roman numeral version of " << num << " is IX."<<endl;
							break;
		case 10 : cout << "The Roman numeral version of " << num << " is X."<<endl;
							break;
		default : cout << "Error!";
				  cout << "This program does not accept numbers"<<endl;
				  cout << "less than 1 or greater than 10."<<endl;
        }
    //Exit stage right!
    return 0;
}

