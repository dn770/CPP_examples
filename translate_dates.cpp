#include "pch.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int day, month, year;
	bool illegal;

	cout << "Please enter a date in numbers:\n";
	cin >> day >> month >> year;

	if (day <= 0 || day >= 32 || month <= 0 || month >= 13 || year > 3000)
		illegal = true;
	else if (day == 31 && (month == 4 ||month == 6 ||month == 9 || month == 11))
        illegal = true;

	else if (month == 2) {
		 if (day == 30 || day == 31)
		 illegal = true;
		else if (day == 29) {
			 if (year % 400 == 0) 
				illegal = false;
			else if (year % 4 != 0 || year % 100 == 0)
				illegal = true;
			else
				illegal = false;
		}
		else 
             illegal = false;
	 } 
	else  
         illegal = false;

	
	if (illegal) {
		cout << "Illegal date, please try again.\n";
		return 1;
	}
	if (day == 1)
		cout << "1st ";
	else if (day == 2)
		cout << "2nd ";
	else if (day == 3)
		cout << "3rd ";
	else
		cout << day << "th ";

	switch (month) {
		case 1: cout << "January";
			break;
		case 2:cout << "February";
			break;
		case 3:cout << "March";
			break;
		case 4: cout << "April";
			break;
		case 5: cout << "May";
			break;
         case 6: cout << "June";
			break;
		case 7: cout << "July";
			break;
		case 8: cout << "August";
			break;
		case 9: cout << "September";
			break;
		case 10:cout << "October";
			break;
		case 11:cout << "November";
			break;
		case 12: cout << "December";
			break;
	}
	cout << " " << year << endl;
	
	cout << "Bye-bye";

	cin.get();
	cin.get();
	return 0;
	}

