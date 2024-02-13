/* first code in arrys - netanel dahan */

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using std:: cin;
using std:: cout;
using std:: endl;

const LIMIT_OF_ARRY= 100;

int main () {
 int dex[LIMIT_OF_ARRY] ; 
 int chosen, chance ; // limit and options
 srand ((unsigned) time (null)) ;
 
do { cout << "hello, please choose between 1 -100 "<< endl; 
 cin >> chozen ;
} while (chozen <= 0 || chozen >= 100);

do { cout<< "to choose numbers by yourself - insert 1, for automatic chooses - insert 2. "  << endl; 
cin >> chance ; 
} while ( chance != 1 && chance != 2 );

if ( chance ==1 ) {
	for (int i=0 ; i <= chozen; i++)
    cin>> dex[i] ; 		
else  // 
  for (int i=0; i <= chozen; i++ )
	 dex[i]= rand() ;

int helper ;
  
	for ( int i =0 ; i <= chozen; i++ )
		dex (i+1)= helper ;
	    dex [i]= dex[i+1] ;
		
	