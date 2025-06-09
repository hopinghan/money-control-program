#include "time.h"
#include <iostream>
using namespace std;

Date::Date() : month(1), day(1) {}

Date::Date(int m, int d) : month(m), day(d) {}

void Date::print() const {
    cout << month << "/" << day << endl;
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

