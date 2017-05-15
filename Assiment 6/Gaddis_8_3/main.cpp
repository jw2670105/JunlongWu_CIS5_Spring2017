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
int searchList(int [], int, int);

int main()
{
	const int NUMS = 10;
	int Picks[NUMS] = { 13579, 26791, 26792, 33445, 55555,
						62483, 77777, 79422, 85647, 93121 };

	int WinNums,		
		Search;			

	cout << "Enter this week’s winning five-digit number: ";
	cin  >> WinNums;

	
	Search = searchList(Picks, NUMS, WinNums);

	
	if (Search == -1)
		cout << "Sorry, no winning ticket this week."<<endl;
	else
	{
		cout << "Congratulations! You have the winning five-digit number: " 
			 << Picks[Search] << endl;
	}

	return 0;
}


int searchList(int array[], int size, int value)
{
	int  position = -1,					
		 first = 0,						
		 last = size - 1,				
		 middle;						
	bool found = false;					

	while (!found && first <= last)
	{
		middle = (first + last) / 2; 	
		if (array[middle] == value)		
		{
			position = middle;			
			found = true;				
		}
		else if (array[middle] > value)	
			last = middle - 1;
		else 							
			first = middle + 1;
	}
	return position;					
}