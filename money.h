#ifndef MONEY_H
#define MONEY_H
#include <iostream>
#include <iomanip>
using namespace std;
class Money {
private:
	double money;
public:
	Money();
	Money(double );
	void setMoney(double );
	double getMoney();
	double GetTotal();
	void print();
};


#endif

