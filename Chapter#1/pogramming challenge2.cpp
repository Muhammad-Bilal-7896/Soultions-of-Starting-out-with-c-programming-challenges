//2. Sales Prediction
//The East Coast sales division of a company generates 58 percent of total sales.Based
//on that percentage, write a program that will predict how much the East Coast division
//will generate if the company has $8.6 million in sales this year.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float salesTotal = 8.6; //stores total sales in salesTotal float which is $8.6 million
	float salesActual; //This is what is 58 % of the total sales which is $ 8.6 million in this case
					   //so in this way
	salesActual = (58.0 / 100.0) * 8.6; //Now salesActual variable is having 58 % of total sales
	cout << "The company will generate $ " << salesActual << " this year.";
	getchar();
}