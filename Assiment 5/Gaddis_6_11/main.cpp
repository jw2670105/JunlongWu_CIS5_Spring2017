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
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
	int Score1, Score2, Score3, Score4, Score5;

	cout << "This program calculates the average of five Scores."<<endl;

	// Call getScore function once for each of the five scores
	getScore(Score1);
	getScore(Score2);
	getScore(Score3);
	getScore(Score4);
	getScore(Score5);

	// Call calcAverage and pass the five scores
	calcAverage(Score1, Score2, Score3, Score4, Score5);
	
	return 0;
}

void getScore(int &Score)
{
	do
	{
		cout << "Enter a test score: ";
		cin  >> Score;

		if (Score < 0 || Score > 100)
		{
			cout << "Invaild test score!"<<endl;
			cout << "Test score must be greater than 0 and less than 100."<<endl;
		}

	} while(Score < 0 || Score > 100);

}

void calcAverage(int Score1, int Score2, int Score3, int Score4, int Score5)
{
	int Lowest; 	
	float Avg;     

	Lowest = findLowest(Score1, Score2, Score3, Score4, Score5);

	if (Lowest == Score1)
		Avg = (Score2 + Score3 + Score4 + Score5)/4;
	else if(Lowest == Score2)
		Avg = (Score1 + Score3 + Score4 + Score5)/4;
	else if(Lowest == Score3)
		Avg = (Score2 + Score1 + Score4 + Score5)/4;
	else if(Lowest == Score4)
		Avg = (Score2 + Score3 + Score1 + Score5)/4;
	else
		Avg = (Score2 + Score3 + Score4 + Score1)/4;
	
	cout << "The average of the four highest scores is "
		 << Avg << endl;
}

int findLowest(int Score1, int Score2, int Score3, int Score4, int Score5)
{	
	if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 &&
	    Score1 < Score5)
		return Score1;
	else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 &&
	    Score2 < Score5)
		return Score2;
	else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 && 
		Score3 < Score5)
		return Score3;
	else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 &&
		Score4 < Score5)
		return Score4;
	else
		return Score5;	
}