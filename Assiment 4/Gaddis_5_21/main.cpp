/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   
#include <ctime>  
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set the radom number seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare variables
    int Random,
		Guess,
		Seed,
		Tries = 0;
    
    //Input data
    cout << "I generated a number between 1 and 100."
		 << "Can you guess what my number is? "<<endl;

        //Map inputs to outputs or process the data
        Random = 1 + rand() % 100;

        //Compare the answer
        do
	{
		cin  >> Guess;
		Tries++;

		if (Guess < Random)
			cout << "Too low. Try again."<<endl;
		if (Guess > Random)
			cout << "Too High. Try again."<<endl;

	} while (Guess != Random);
	cout << "Congratulations. You figured\nout my number "
		 << "in " << Tries << " guesses."<<endl;
    
    //Exit stage right!
    return 0;
}

