/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	const int mkys = 3;
	const int days = 7;
	int food[mkys][days];
	double pounds, least, most, sum = 0;
	

	cout << "Input how many pounds of food each monkey ate each day."<<endl;
	for (int row = 0; row < mkys; row++)
	{
		for (int col = 0; col < days; col++)
		{
			do
			{

				cout << "Monkey #" << (row + 1) << " on day #" << (col + 1)
					 << " ate: ";
				cin  >> pounds;

				if (pounds < 0)
				{
					cout << "Error! Number of pounds must be greater than 0."<<endl;
				}

			} while (pounds < 0);

			food[row][col] = pounds;


		
			sum += pounds;
		}
		cout << endl;							
	}


	least = most = food[0][0];
	for (int row = 0; row < mkys; row++)
	{
		for (int col = 0; col < days; col++)
		{
			
			if (food[row][col] < least)
			{ 
				least = food[row][col];
			}
			if (food[row][col] > most)
			{ 
				most = food[row][col];
			}
		}
	}

	
	cout << fixed << showpoint << setprecision(1);
	cout << "Average amount of food eaten per day : "
		 << sum / 21.0 << " pounds."<<endl;
	cout << "Least amount of food eaten: " << least << " pounds."<<endl;
	cout << "Greatest amount of food eaten: " << most << " pounds."<<endl;

	return 0;
}