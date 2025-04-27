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

void createRecord::input() {	//輸入記帳內容
	cout << "輸入金額: ";
	cin >> money;
	
	cout << "輸入類別: ";
	cin >> category;
	
	cout << "輸入備註(例如:交通，飲食): " ;
	cin.ignore();				//忽略前一行的換行符
	getline(cin, note);			// 讀取整行輸入
	int month=0, day=0;
	
	cout << "輸入日期(格式month day): ";
	cin >> month >> day;

	if (month < 1 || month > 12 || day < 1 || day > 31) {
		cout << "日期不正確，請重新輸入。" << endl;
		return;
	}
	if ((month == 2 && day > 29) || (month == 4 && day > 30) || (month == 6 && day > 30) || (month == 9 && day > 30) || (month == 11 && day > 30)) { // 檢查日期的有效性
		cout << "日期不正確，請重新輸入。" << endl;
		return;
	} 
	if (month == 2 && day == 29) { // 如果是2月，檢查是否為閏年
		int year;
		cout << "請輸入年份: ";
		cin >> year;
		if ((year % 4 != 0) || (year % 100 == 0 && year % 400 != 0)) {
			cout << "日期不正確，請重新輸入。" << endl;
			return;
		}
	}
	

	date = Date(month, day);
	
}

void createRecord::display() {    ///顯示記帳內容
	cout << "金額: " << money << endl;
	cout << "類別: " << category << endl;
	cout << "備註: " << note << endl;
	cout << "日期: ";
	date.print();
	cout << endl;
}

