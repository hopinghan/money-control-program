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
	cout << "��J���B: ";
	cin >> money;
	
	cout << "��J���O: ";
	cin >> category;
	
	cout << "��J�Ƶ�: (�Ҧp:��q�A����)";
	cin.ignore();
	getline(cin, note); // Ū������J
	int month, day;
	
	cout << "��J���: (moth day)";
	cin >> month >> day;
	date = Date(month, day);
}

void creatRecord::display(){
	cout << "���B: " << money << endl;
	cout << "���O: " << category << endl;
	cout << "�Ƶ�: " << note << endl;
	cout << "���: ";
	date.print();
	cout << endl;
}

