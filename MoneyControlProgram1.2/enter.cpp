#include "enter.h"
#include<iostream>
#include<string>
#include "time.h"
using namespace std;
createRecord::createRecord() {}
createRecord::createRecord(int m, string c, string n, Date d) {
	money = m;
	category = c;
	note = n;
	date = d;
}

void createRecord::input() {	//��J�O�b���e
	cout << "��J���B: ";
	cin >> money;
	
	cout << "��J���O: ";
	cin >> category;
	
	cout << "��J�Ƶ�(�Ҧp:��q�A����): " ;
	cin.ignore();				//�����e�@�檺�����
	getline(cin, note);			// Ū������J
	int month=0, day=0;
	
	cout << "��J���(�榡month day): ";
	cin >> month >> day;

	if (month < 1 || month > 12 || day < 1 || day > 31) {
		cout << "��������T�A�Э��s��J�C" << endl;
		return;
	}
	if ((month == 2 && day > 29) || (month == 4 && day > 30) || (month == 6 && day > 30) || (month == 9 && day > 30) || (month == 11 && day > 30)) { // �ˬd��������ĩ�
		cout << "��������T�A�Э��s��J�C" << endl;
		return;
	} 
	if (month == 2 && day == 29) { // �p�G�O2��A�ˬd�O�_���|�~
		int year;
		cout << "�п�J�~��: ";
		cin >> year;
		if ((year % 4 != 0) || (year % 100 == 0 && year % 400 != 0)) {
			cout << "��������T�A�Э��s��J�C" << endl;
			return;
		}
	}
	

	date = Date(month, day);
	
}

void createRecord::display() {    ///��ܰO�b���e
	cout << "���B: " << money << endl;
	cout << "���O: " << category << endl;
	cout << "�Ƶ�: " << note << endl;
	cout << "���: ";
	date.print();
	cout << endl;
}

