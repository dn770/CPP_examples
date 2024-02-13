#include <iostream>
#include <cmath>

using std:: cin;
using std:: cout;
using std:: endl;
 
 const double PI=3.141592 ;
  int main () {
	  double radius, epsilon ;
	         supervise, last_supervise;
	  int figures ;
	 
	do{
	    cout<<"please enter radius of circle, number of figures, and distance"
	    cin >> radius >> figures >> epsilon;
	} while (figures < 3 || radius <=0);
	
	 for (i=3; i<= figures; i++) {
		 i*0.5*radius*radius*sin(2*PI/figures)= supervise ; 
		 if (i>3)
			 if (supervise - last_supervise < epsilon){
			 cout<< "the distance between this to the last are small from  ";
			 break; }
		cout << "the of " << i << " "<< supervise ;
		 supervise= last_supervise; }
	 cout << "tanks bye" ;
cin.get();
reurn 0 ;
}