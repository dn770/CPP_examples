#include <iostream>

using std:: cin;
using std:: cout;
using std:: endl;

int main() {
do{
int example, size, 
    line, cube ;

do{
cout <<" Hello, please enter the number of the example (1-3) and the size (2-10)"<< endl;
cin << example << size ; 
} while ( example<1 || example>3 || size<2 || size >10);
 
 if ( example==1) {
    for (line=1 ; line <=size; line++){
		for (cube=1 ; cube <= size ; cube ++){
		if (line % 2 !=0)
			cout<< (cube%2 !=0) ? "x" : "o" ;
		else 
		   cout << (cube%2 !=0) ? "o" : "x" ; }
	cout << endl; }
		
else if (example ==2)
         for (line=0 ; line <= size; line++){
		     for(cube=1, cube <= size, cube++)
			   cout<< (cube<=line) ? "o" : "x" ; 
         cout << endl;}
	  
else if (example==3)
	if (size % 2 != 0)
	cout << "illegal size to this example, please try again"<< endl;
    else
	    for (line=1 ; line<= size ; line++) {
			 for (cube=1 ; cube <= size ; cube++){
			   if ( line <= (size /2)
				 cout<< (cube <= (size/2) ? "x" : "o";
			    else
			     cout<< (cube <=(size/2) ? "o" : "x";} 
		    cout<< endl; }
				
 do{
	 cout << " to continue press 1, to exit press 0" << endl;
 cin >> again; } while (again !=0 && again !=1);
 
 }while (again=1)
cout << "thank-you, bye-bye"<< endl;

cin.get();
return 0 ; 
}