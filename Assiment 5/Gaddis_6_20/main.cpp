/* 
 * File:   main.cpp
 * Author: Junlong Wu
 * Created on May 3, 2017, 9:07 AM
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
float spfl(int, float, float, float, float);

int main()
{
	int   NumOfShares;
	float ProfitLoss,
		   PurchPrice,
		   PurchComm,
		   SalePrice,
		   SaleComm;

	cout << "What is the number of shares? ";
	cin  >> NumOfShares;
	cout << "What is the purchase price per share? ";
	cin  >> PurchPrice;
	cout << "What is the purchase commission paid? ";
	cin  >> PurchComm;
	cout << "What is the sale price per share? ";
	cin  >> SalePrice;
	cout << "What is the sale commission paid? ";
	cin  >> SaleComm;

	ProfitLoss = spfl(NumOfShares, PurchPrice, PurchComm, SalePrice,
								 SaleComm);

	cout << "The profit / loss from the sale of stock is $";
	cout << fixed << showpoint << setprecision(2);
	cout << ProfitLoss << endl << endl;

	return 0;
}


float spfl(int NumOfShares, float PurchPrice, float PurchComm,
	                   float SalePrice, float SaleComm)
{
	return ((NumOfShares * SalePrice) - SaleComm) - ((NumOfShares * PurchPrice)
		    + PurchComm);
}

