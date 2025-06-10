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
        cout << "�L�k���}�ɮ׼g�J�O���C" << endl;
        return;
    }

    cout << "��J���B: ";
    cin >> money;

    cout << "��J���O(�Ҧp: ��q ���\..): ";
    cin >> category;

    cout << "��J�Ƶ�(�Ҧp:�����W��): ";
    cin.ignore();
    getline(cin, note);

    int month = 0, day = 0;
    cout << "��J���(�� ��): ";
    cin >> month >> day;

    if (cin.fail() || month < 1 || month > 12 || day < 1 || day > 31) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "�����J���~�A�O�����s�W�C" << endl;
        return;
    }

    date = Date(month, day);
    outFile << category << " " << note << " " << money << " " << month << " " << day << endl;
    outFile.close();
    cout << "�O���w�s�W�C" << endl;
}

void createRecord::display() {
    ifstream inFile("records.txt");
    if (!inFile) {
        cout << "�|�L����O���C" << endl;
        return;
    }

    string category, note;
    double money;
    int month, day;

    while (inFile >> category >> note >> money >> month >> day) {
        cout << "����: " << category << endl;
        cout << "�Ƶ�: " << note << endl;
        cout << "���B: $" << fixed << setprecision(2) << money << endl;
        cout << "���: " << month << " �� " << day << " ��" << endl;
        cout << "-------------------------" << endl;
    }

    inFile.close();
}


