/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

int searchList(int[], int, int);

int main()
{
	const int ACCTS = 18;

	int List[ACCTS] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
						8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
						1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

	int AcctNum, 
		Result;

	cout << "Enter your charge account number to determine if it is valid: ";
	cin  >> AcctNum;

	Result = searchList(List, ACCTS, AcctNum);
	if(Result == -1)
		cout << "Account number " << AcctNum << " is invalid."<<endl;
	else
		cout << "Account number " << List[Result] << " is valid"<<endl;

	return 0;
}


int searchList(int list[], int size, int value)
{
	
	int index = 0,
	 	position = -1;
	bool found = false;

	while (!found && index < size)
	{
		if (list[index] == value)		
		{
			found = true;				
			position = index;
		}
		index++;
	}
	return position;
}