/*. התכנית קוראת מהמשתמש ערך טבעי
.0..X בתחום N ב. התכנית מגרילה ערך שלם
המשתמש מזין שוב ושוב את .N ג. התכנית מזמינה את המשתמש לנחש את
הניחוש שלו, ומקבל מהתכנית היזון חוזר האם המספר שהוא ניחש קטן או
.N - גדול מ
תודיע לו התכנית בכמה צעדים הוא עשה N ד. כאשר המשתמש הצליח לנחש את
זאת, וכמה צעדים לכל היותר היו נדרשים למשתמש רציונלי אך חסר מזל.
(אתם מוזמנים לחשוב בעצמכם כיצד היה נוהג משתמש רציונלי חסר מזל,
וכמה ניחושים היו נדרשים לו).
ה. התכנית תעניק למשתמש ציון שיחושב באופן הבא:
grade = (number of guesses a rational unlucky user would need)/
(number of guesses our user needed)
ציונו של המשתמש לא יעלה על מאה (ולכן אם הערך הנ"ל גדול ממאה יקבל
המשתמש את הציון מאה).
ו. התכנית שואלת את המשתמש אם ברצונו לחזור על התהליך הנ"ל, ובמידה
והוא מעוניין תחזור למתואר בסעיף א'. */
#include <iostream>
#include <ctime>
#include <cstdlib>

using std:: cin;
using std:: cout;
using std:: endl;

int main() {
	do{
		int again, limit, num;
	srand ((unsigned) time (null)) ;
	cout<< "please"<< endl;
	cin>> limit;
	chozen_num= rand%(limit+1)
		for (i = 1; ;i++) {
	cout<< " "
	cin>> num ;
	if (num == chozen_num)
		break;
	else if (num > chozen_num)
		cout << "too much high";
	else
		cout << "too much low";
	}
	cout << "you did it in " << i << "guesses";
	cout << "you are luky guy, for unlucky guy itws was take " << chozen_num<< "times";
	cout << "your grade is " << i / chozen_num << endl;
	do{
		cout << "to continu "
			cin >> again;
	} while (again !=0 && again!=1) ;
} while (again = 1);
cout << "tanks bye";
cin.get();
reurn 0 ;
}
	
	
	