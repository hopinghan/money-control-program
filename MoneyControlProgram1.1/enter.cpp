#include "enter.h"
#include<iostream>
#include<string>
#include "time.h"
using namespace std;
creatRecord::creatRecord() {}
creatRecord::creatRecord(int m, string c, string n, Date d) {
	money = m;
	category = c;
	note = n;
	date = d;
}

void creatRecord::input() {
	cout << "輸入金額: ";
	cin >> money;
	
	cout << "輸入類別: ";
	cin >> category;
	
	cout << "輸入備註: (例如:交通，飲食)";
	cin.ignore();
	getline(cin, note); // 讀取整行輸入
	int month, day;
	
	cout << "輸入日期: (moth day)";
	cin >> month >> day;
	date = Date(month, day);
}

void creatRecord::display(){
	cout << "金額: " << money << endl;
	cout << "類別: " << category << endl;
	cout << "備註: " << note << endl;
	cout << "日期: ";
	date.print();
	cout << endl;
}

