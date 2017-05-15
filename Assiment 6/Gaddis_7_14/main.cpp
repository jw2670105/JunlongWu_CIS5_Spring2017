/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int winningDigits[5];
	int player[5];
	int digit, match = 0;

	srand(time(NULL));					

	for (int i = 0; i < 5; i++)
	{
	 	winningDigits[i] = 0 + rand() % 9;
	} 

	cout << "Enter your 5 lottery picks in the range of 0 to 9,"<<endl;
        cout << "one number at a time."<<endl;
	for (int i = 0; i < 5; i++)
	{
		do
		{
			cout << "Number " << (i + 1) << ": ";
			cin  >> digit;

			
			if (digit < 0 || digit > 9)
			{
				cout << "Invaild number!"<<endl;
				cout << "Pick a number in the range of 0 to 9."<<endl;
			}
		} while (digit < 0 || digit > 9);
		
		player[i] = digit;
	}

	
	for (int i = 0; i < 5; i++)
	{
		if (winningDigits[i] == player[i])
			match++;
	}


	cout << "Winning digits : ";
	for (int i = 0; i < 5; i++)
	{
		cout << winningDigits[i] << " ";
	}
	cout << endl;


	cout << "player digits  : ";
	for (int i = 0; i < 5; i++)
	{
		cout << player[i] << " ";
	}
	cout << endl;


	cout << "Matching digits: " << match << endl;

	return 0;
}