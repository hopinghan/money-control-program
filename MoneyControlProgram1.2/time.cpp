#include "time.h"
Date::Date(){}
Date::Date(int m,int d) {
	month = m;
	day = d;
}
void Date::print() {
	cout << month << "ค๋" << day << "ค้" << endl;
}
