#include "money.h"
Money::Money(){}
Money::Money(double m) {
	money = m;
}
void Money::setMoney(double m) {
	this->money = money;
}
double Money::getMoney() {
	return money;
}
double Money::GetTotal() {
	double total = 0;
	total += money;
	return total;
}
void Money::print() {
	cout << fixed << setprecision(1);
	cout << "$=" << money<<endl;
}
