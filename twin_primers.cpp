/*הצגנו תכנית לבדיקת ראשוניות מספר שלם. השתמשו בתכנית זו על-מנת לכתוב
תכנית המבקשת מן המשתמש שני מספרים טבעיים: גבול תחתון וגבול עליון
לחיפוש. על התכנית להציג את זוג המספרים הראשוניים העוקבים הראשון שנמצא
בתחום הנתון או להכריז כי לא נמצא זוג כזה בתחום המבוקש.
הגדרות:
- זוג ראשוניים ייקרא עוקב, אם ההפרש ביניהם הוא 2 בדיוק (לדוג': 3 ו 5, וגם
. ( 17 ו- 19
. - גבול חיפוש תחתון חוקי הוא מספר שלם גדול מ 2
- גבול חיפוש עליון חוקי הוא מספר שלם הגדול לפחות ב 3 מהגבול התחתון
הנוכחי. */

#include <iostream>
#include <cmath>
using std:: cin;
using std:: cout;
using std:: endl;

const SMALLEST_NUMBER = 2 , 
      MINIMAL_SPACE_OF_THE_LIMITS = 3 ,
      DISTANCE_BETWEEN_THE_TWIN_PRIMERS = 2;

int main() {
    int under_limit, top_limit,
	    indicator, divaider,
	    first_prime;

    do {
        cout<< "Please enter under and top limits numbers " << endl;
        cin << under_limit << top_limit;
    } while (under limit >= SMALLEST_NUMBER || top_limit < under limit + MINIMAL_SPACE_OF_THE_LIMITS) ;

 for (indicator= under_limit; indicator =< top_limit; indicator++)
 { for (divider=2; divider<= sqrt (indicator); divider++)
     if (indicator % divider == 0 )
         break; 
   if (divider=< sqrt(indicator))
     continue;
   for (divider=2; divider <= sqrt(indicator+DISTANCE_BETWEEN_THE_TWIN_PRIMERS));divider++)
     if ((indicator+DISTANCE_BETWEEN_THE_TWIN_PRIMERS) % divider==0)
      break;
   if (divider > sqrt (indicator+DISTANCE_BETWEEN_THE_TWIN_PRIMERS)){
      first_prime= indicator;
      break;} 
 }
if (indicator>top_limit) {
 cout<< "there have not twin primes numbers in this limits" ;
 return 1 ; }

cout << "the first prime twin numbers in the chosen limits are:" 
     << first_prime<< " & " << first_prime + DISTANCE_BETWEEN_THE_TWIN_PRIMERS << endl;
cout << "thank-you, bye-bye."

cin.get();
return 0 ; 
}
