#include "accountBook.h"
#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;

accountBook::accountBook() {}

void accountBook::addRecord() {
    createRecord newRecord;
    newRecord.input();         // �ѨϥΪ̿�J�@���O���üg�J�ɮ�
    records.push_back(newRecord);
}

void accountBook::displayRecords() {
    cout << "\n=== �A��J���Ҧ��O�b���e ===" << endl;
    createRecord record;
    record.display();  // Ū�� records.txt ����ܩҦ�����
}

void accountBook::editRecords() {
    ifstream inFile("records.txt");
    if (!inFile) {
        cout << "�|�L����O���C" << endl;
        return;
    }

    struct Record {
        string category = "Unknown";
        string note = "None";
        double money = 0.0;
        int month = 1;
        int day = 1;
    };


    vector<Record> records;
    Record temp;

    // Ū�ɨæs�J vector
    while (inFile >> temp.category >> temp.note >> temp.money >> temp.month >> temp.day) {
        records.push_back(temp);
    }
    inFile.close();

    // ��ܩҦ��������ϥΪ̬�
    cout << "\n=== �Ҧ��O�b���� ===" << endl;
    for (size_t i = 0; i < records.size(); ++i) {
        cout << i + 1 << ". "
            << "����: " << records[i].category << ", "
            << "�Ƶ�: " << records[i].note << ", "
            << "���B: $" << fixed << setprecision(2) << records[i].money << ", "
            << "���: " << records[i].month << "/" << records[i].day << endl;
    }

    // ��J�Q�n�ק���@��
    int index;
    cout << "\n�п�J�A�Q�ק諸�����s���]1 ~ " << records.size() << "�^: ";
    cin >> index;

    if (index < 1 || index > records.size()) {
        cout << "��J�s���L�ġC" << endl;
        return;
    }

    Record& rec = records[index - 1];

    // ��ܭק���
    int choice;
    cout << "\n�A�Q�ק���@���H" << endl;
    cout << "1. ���� (category)" << endl;
    cout << "2. �Ƶ� (note)" << endl;
    cout << "3. ���B (money)" << endl;
    cout << "4. ��� (month/day)" << endl;
    cout << "�п�J�ﶵ�s��: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "�п�J�s������(category): ";
        cin >> rec.category;
        break;
    case 2:
        cout << "�п�J�s���Ƶ�(note): ";
        cin >> rec.note;
        break;
    case 3:
        cout << "�п�J�s�����B: ";
        cin >> rec.money;
        break;
    case 4:
        cout << "�п�J�s�����: ";
        cin >> rec.month;
        cout << "�п�J�s�����: ";
        cin >> rec.day;
        break;
    default:
        cout << "�L�Ŀﶵ�C" << endl;
        return;
    }

    // �g�^�ɮ�
    ofstream outFile("records.txt");
    for (const auto& r : records) {
        outFile << r.category << " "
            << r.note << " "
            << fixed << setprecision(2) << r.money << " "
            << r.month << " "
            << r.day << endl;
    }
    outFile.close();

    cout << "�����ק粒���I" << endl;
}