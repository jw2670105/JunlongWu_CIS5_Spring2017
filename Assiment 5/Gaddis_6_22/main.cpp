/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on May 3, 2017, 9:07 AM
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
using namespace std;

// Function Prototypes
bool isPrime(int);

int main()
{
	int Num;

		cout << "This program let you know if the number entered is a "
			 << "prime number.Enter a number: ";
		cin  >> Num;

	cout << "The number " << Num;

	if (isPrime(Num))
	{
		cout << " is a Prime number." << endl;
	}
	else
		cout << " is not a Prime number." << endl;

	return 0;
}

bool isPrime(int Num)
{
	if (Num > 1)
	{
		for (int i = 2; i <= Num; ++i)
		{
			
			if (Num % i == 0)
			{
				if(Num == i)
					return true;
				else
					return false;
			}
	
		}
	}
	return false;
}

