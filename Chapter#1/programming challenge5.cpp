/*5. Average of Values
To get the average of a series of values, you add the values up and then divide the sum
by the number of values. Write a program that stores the following values in five different variables:
28, 32, 37, 24, and 33. The program should first calculate the sum
of these five variables and store the result in a separate variable named sum. Then, the
program should divide the sum variable by 5 to get the average. Display the average
on the screen. */
#include<iostream>
using namespace std;
#include<conio.h>//required for VS 2015 not for latest
int main()
{
	int var1 = 28, var2 = 32, var3 = 37, var4 = 24, var5 = 33;//variables for calculating the sum and average
	int sum; //This will store the sum
	float average; //This will store the average
	sum = var1 + var2 + var3 + var4 + var5; //will store the sum of variables in the variable sum
											//Now for average
	average = sum / 5;//formula for average
	cout << "The average of five given variables is equal to: " << average;
	getchar(); //only required for vs 2015 or below not for latest
	return 0;
}