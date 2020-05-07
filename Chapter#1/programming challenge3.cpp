/* Sales Tax
Write a program that will compute the total sales tax on a $95 purchase. Assume the
state sales tax is 4 percent and the county sales tax is 2 percent. */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float CSalesTax; //This variable will store the country sales tax
	float SSalesTax; //This variable will store the state sales tax
	float TotalSalesTax; //This variable will store the total sales tax
	float purchase = 95; //This variable stores the purchase of 95 dollars
	//Now state sales tax which is 4 % of total purchase is
	SSalesTax = (4.0 / 100.0)*95.0; //Now state sales tax stores actually the 4 % of total purchase
	//Now country sales tax which is 2 % of total purchase is
	CSalesTax = (2.0 / 100.0)*95.0; //Now state country tax stores actually the 2 % of total purchase
	TotalSalesTax = SSalesTax + CSalesTax;
	cout << "The total sales tax of $ 95 purchase is = '" << TotalSalesTax << "'$";
	getchar(); //To pause the screen i.e console Not needed in the latest version but was necessary for VS 2015 or below to pause the console
	return 0;
}