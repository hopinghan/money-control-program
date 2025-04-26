#ifndef ENTER_H
#define ENTER_H
#include <iostream>
#include <string>
#include "time.h"
using namespace std;

class creatRecord
{
private:
	int money;
	string category;
	string note;
	Date date;;
public:
	creatRecord();
	creatRecord(int,string,string,Date);
	void input();
	void display();

};

#endif // !1
