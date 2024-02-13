// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double param_a, param_b, param_c,
		s, x, y;
	cout << "please insert The length of the sides of the triangle." << endl;
	cin >> param_a >> param_b >> param_c ;
	s = (param_a + param_b + param_c) /2 ;
	x = s * (s - param_a)*(s - param_b)*(s - param_c);
	y = sqrt(x);
	cout << "the area of ​​the triangle is" << y << " cm" << endl;

	cin.get();
	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
