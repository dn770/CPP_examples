// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
	int num1, num2, oper;
	cout << "please write two numbers and also 1 for addition, 2 for Subtraction,3 for Multiplication"
		"4 for , or 5 for "<< endl;
	cin >> num1 >> num2 >> oper;
	switch (oper){
	case 1 : cout << num1 << "+" << num2 << "=" << num1 + num2;
		break;
	case 2 : cout << num1 << "-" << num2 << "=" << num1 - num2;
		break;
	case 3 : cout << num1 << "*" << num2 << "=" << num1 * num2;
		break;
    case 5: cout << num1 << "%" << num2 << "=" << num1 % num2 <<" ";
	case 4: cout << num1 << "/" << num2 << "=" << num1 / num2 ;
		break;
	default: cout << "ilegal opertors: 1/2/3/4/5 only";
	}
	cout << endl<< "bye-bye";
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
