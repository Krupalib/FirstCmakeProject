// FirstCmakeProject.cpp : Defines the entry point for the application.
//

#include "FirstCmakeProject.h"
#include <iostream>


void add(double a, double b);

int main()
{
	double num1, num2;
	std::cout << "Enter first number";
	std::cin >> num1;
	std::cout << "Enter second number";
	std::cin >> num2;
	add(num1, num2);

}

void add(double a, double b) {
	printf("the sum is: %f", a + b);
}