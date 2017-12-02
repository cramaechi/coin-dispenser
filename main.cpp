//Program that tells what coins to give out for any amount of change
//between 1 cent and 99 cents.

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void input(int& amountLeft);
//Precondition: amountLeft is > 0 and < 100.
//Prompts the user to input data.

void computeCoins(int coinValue, int& number, int& amountLeft);
//Precondition: coinValue is >= 0 and < 100, amountLeft is > 0 and < 100.
//Postcondition: number has been set equal to the maximum number of coin denominations coinValue
//cents that can be obtained from amountLeft cents. amountLeft has beed
//decreased by the value of the coins; that is, decreased by number * coinValue.

void output(int coinValue, int number, int amountLeft);
//Outputs the denomination of coins for the amount of original change.

void clearScreen(); //Clears console screen.

int getCD(int cD);
//Precondition: cd is either 1, 10, or 25;
//Returns the the coin denominaton in numerical format.

int main()
{
	char ans;

	do
	{
	   int n, aL;

	   input(aL);

	   for (int i = 1; i <= 3; i++)
	   {
		   computeCoins(i, n, aL);
		   output(i, n, aL);
	   }

	   cout<<"Start over? (y/n): ";
	   cin>>ans; 

	   if (ans == 'y' || ans == 'Y')
		   cout<<"\n\n";
	}while(ans == 'y' || ans == 'Y');

	return 0;
}

void input(int& amountLeft)
{
	cout<<"Enter in amount of change: ";
	cin>>amountLeft;
	cout<<endl;
}

void computeCoins(int coinValue, int& number, int& amountLeft)
{
	coinValue = getCD(coinValue);
	number = amountLeft/coinValue;
	amountLeft = amountLeft - (coinValue*number);
}

void output(int coinValue, int number, int amountLeft)
{
	if (coinValue == 1)
	{
		coinValue = getCD(coinValue);
		int amountOfChange = (number*coinValue) + amountLeft;
		cout<<amountOfChange<<" cents can be given as\n";
	}
	else
		coinValue = getCD(coinValue);

	if (coinValue == 25 && number > 0)
		cout<<number<<" quarter(s) ";
	else if (coinValue == 10 && number > 0)
		cout<<number<<" dime(s) ";
	else if (coinValue == 1 && number > 0)
		cout<<number<<" penny(pennies)\n\n";
	else 
		return;
}

/*
void clearScreen()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
*/

int getCD(int cD)
{
	if (cD == 1)
		return 25;
	else if(cD == 2)
		return 10;
	else 
		return 1;
}
