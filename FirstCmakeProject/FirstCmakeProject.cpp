// FirstCmakeProject.cpp : Defines the entry point for the application.
//

#include "FirstCmakeProject.h"
#include <iostream>


void add(double a, double b);
void diff(double a, double b);
void prod(double a, double b);
void div(double a, double b);



int main()
{
	double num1, num2;
	std::cout << "Enter first number";
	std::cin >> num1;
	std::cout << "Enter second number";
	std::cin >> num2;
	add(num1, num2);
	diff(num1, num2);
	prod(num1, num2);
	div(num1, num2);
	
}

void add(double a, double b) {
	printf("the sum is: %f \n", a + b);
}

void diff(double a, double b) {
	printf("the difference is: %f \n", a - b);
}
void prod(double a, double b) {
	printf("the product is: %f \n", a*b);
}

void div(double a, double b) {
	printf("the division result is: %f \n", a/b);
}