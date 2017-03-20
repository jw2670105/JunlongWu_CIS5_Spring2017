/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on February 23, 2017, 17:42 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    //Declare variables
    const float RETAIL_PRICE = 99;
    int Units;
    float	RetailCost, 
		TotalCost;

    //Input data
    cout << "To compute the total cost of the purchase"<<endl;
    cout << "enter the number of units purchased: "<<endl;
    cin  >> Units;
        
    //Map inputs to outputs or process the data
       
    //Output the transformed data
    if (Units > 0)
		{
			RetailCost = Units * RETAIL_PRICE;
			cout << fixed << showpoint << setprecision(2);
		}
		if (Units >= 10 && Units <= 19)
		{
			TotalCost = RetailCost - (RetailCost * .20);
			cout << "Total cost of the purchase: $" << TotalCost << endl;
		}
		else if (Units >= 20 && Units <= 49)
		{
			TotalCost = RetailCost - (RetailCost * .30);
			cout << "Total cost of the purchase: $" << TotalCost << endl;
		}
		else if (Units >= 50 && Units <= 99)
		{
			TotalCost = RetailCost - (RetailCost * .40);
			cout << "Total cost of the purchase: $" << TotalCost << endl;
		}
		else if (Units >= 100)
		{
			TotalCost = RetailCost - (RetailCost * .50);
			cout << "Total cost of the purchase: $" << TotalCost << endl;
		}
	else
		cout << "Total cost of the purchase: $" << RetailCost << endl;
    //Exit stage right!
    return 0;
}

