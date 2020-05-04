/* 1. Sum of Two Numbers
Write a program that stores the integers 50 and 100 in variables, and stores the sum of
these two in a variable named total . */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int var1 = 50; //storing 50 in var 1
	int var2 = 100; //storing 100 in var2
	int total = var1 + var2; //storing the sum of var1 and var2 in total
	//optional output
	cout << "The sum of var1 and var2 is = " << total;
	getchar(); //To pause the screen i.e console Not needed in the latest version but was necessary for VS 2015 or below to pause the console
	return 0;
}