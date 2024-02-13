
#include "pch.h"
#include <iostream>
using std::cin ;
using std::cout ;
using std::endl;

int main()
{
	unsigned int day, month, year,
		year_div_4, year_p_year_div_4, month_code,
		day_code, day_in_week ;

    cout << "Hello!\n please enter day, month and year in numbers ";
	cin >> day >> month >> year;
	
	if (day=> 32|| day=< 0 || year)
		year_div_4 = year / 4;

	year_p_year_div_4 = year_div_4 + year;
	
	switch (month) {
	    case 1:
	    case 10: month_code = 1 ;
		    break ;
	    case 2: 
	    case 3:
	    case 11: month_code = 4 ;
		    break ;
	    case 4:
	    case 7:	month_code = 0 ;
		    break ;
	    case 5: month_code = 2 ;
		    break ;
	    case 6: month_code = 5 ;
		     break ;
	    case 8: month_code = 3 ;
		     break ;
	     case 9:
	     case 12: month_code = 6 ;
		     break ;
	     default: cout << "illegal month" << endl;
	      	break ;
	}
	
	day_code = day + year_p_year_div_4 + month_code ;
	day_in_week = day_code % 7;
	
	switch (day_in_week) {
	case 1: cout << "Sunday\n";
		break;
	case 2: cout << "Monday\n";
		break;
	case 3: cout << "Tuesday\n";
		break;
	case 4: cout << "Wednesday\n";
		break;
	case 5: cout << "Thursday\n";
		break;
	case 6: cout << "Friday\n";
		break;
	case 0: cout << "Saturday\n";
		break;
	}
	cout << "thank you\nbye-bye\n";
	
	cin.get();
	return 0;
} 
