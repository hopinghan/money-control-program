#include "enter.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits>
using namespace std;
createRecord::createRecord() :money(0), category(""), note(""), date(0,0) {}
createRecord::createRecord(double m, string c, string n, Date d) {
    money = m;
    category = c;
    note = n;
    date = d;
}

void createRecord::input() {
    ofstream outFile("records.txt", ios::app);
    if (!outFile) {
        cout << "無法打開檔案寫入記錄。" << endl;
        return;
    }

    cout << "輸入金額: ";
    cin >> money;

    cout << "輸入類別(例如: 交通 早餐..): ";
    cin >> category;

    cout << "輸入備註(例如:食物名稱): ";
    cin.ignore();
    getline(cin, note);

    int month = 0, day = 0;
    cout << "輸入日期(月 日): ";
    cin >> month >> day;

    if (cin.fail() || month < 1 || month > 12 || day < 1 || day > 31) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "日期輸入錯誤，記錄未新增。" << endl;
        return;
    }

    date = Date(month, day);
    outFile << category << " " << note << " " << money << " " << month << " " << day << endl;
    outFile.close();
    cout << "記錄已新增。" << endl;
}

void createRecord::display() {
    ifstream inFile("records.txt");
    if (!inFile) {
        cout << "尚無任何記錄。" << endl;
        return;
    }

    string category, note;
    double money;
    int month, day;

    while (inFile >> category >> note >> money >> month >> day) {
        cout << "項目: " << category << endl;
        cout << "備註: " << note << endl;
        cout << "金額: $" << fixed << setprecision(2) << money << endl;
        cout << "日期: " << month << " 月 " << day << " 日" << endl;
        cout << "-------------------------" << endl;
    }

    inFile.close();
}


