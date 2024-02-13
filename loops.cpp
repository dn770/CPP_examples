#include "pch.h"
#include <iostream> 

using std:: cin ;
using std:: cout ;
using std:: endl ;

int main() {
    int num=0, max=1 , i =0;
    
    do {
        cout << "Please enter natural number"<< endl ;
        cin >> num ;
    } while (num<1);

    while (num > 1){
     if (num % 2 == 0)
     num /= 2 ;
     else 
      num = num * 3 +1 ;

    if  (num > max)
    max = num ;

     i ++ ;
    }
   cout <<  "The loop ran " << i << "rounds" << endl;
   cout << "The biggest number was: " << max << endl;
   cout << "Thank you.\n Bye-bye." ;
   
cin.get ();
return 0 ;
}