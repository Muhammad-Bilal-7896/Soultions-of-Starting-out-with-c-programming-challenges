/*  4. Restaurant Bill
Write a program that computes the tax and tip on a restaurant bill for a patron with
a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen. */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float tax; //Stores the tax(6.75%) on meal cost i.e $88.67
	float tip; //stores the tip which is 20 % of total i.e (meal cost + tax)
	float mealCost = 88.67; //given meal cost in dollars
	tax = (6.75 / 100.0)*88.67;//Storing the actual tax
	tip = (20.0 / 100.0)*(tax + mealCost);
	float total = tax + tip + mealCost;
	cout << "The meal cost is: " << mealCost << endl;
	cout << "The tax is: " << tax << endl;
	cout << "The tip  is: " << tip << endl;
	cout << "The total tax is: " << total << endl;

	getchar(); //To pause the screen i.e console Not needed in the latest version but was necessary for VS 2015 or below to pause the console
	return 0;
}