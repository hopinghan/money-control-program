#include "accountBook.h"
#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;

accountBook::accountBook() {}

void accountBook::addRecord() {
    createRecord newRecord;
    newRecord.input();         // 由使用者輸入一筆記錄並寫入檔案
    records.push_back(newRecord);
}

void accountBook::displayRecords() {
    cout << "\n=== 你輸入的所有記帳內容 ===" << endl;
    createRecord record;
    record.display();  // 讀取 records.txt 並顯示所有紀錄
}

void accountBook::editRecords() {
    ifstream inFile("records.txt");
    if (!inFile) {
        cout << "尚無任何記錄。" << endl;
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

    // 讀檔並存入 vector
    while (inFile >> temp.category >> temp.note >> temp.money >> temp.month >> temp.day) {
        records.push_back(temp);
    }
    inFile.close();

    // 顯示所有紀錄給使用者看
    cout << "\n=== 所有記帳紀錄 ===" << endl;
    for (size_t i = 0; i < records.size(); ++i) {
        cout << i + 1 << ". "
            << "項目: " << records[i].category << ", "
            << "備註: " << records[i].note << ", "
            << "金額: $" << fixed << setprecision(2) << records[i].money << ", "
            << "日期: " << records[i].month << "/" << records[i].day << endl;
    }

    // 輸入想要修改哪一筆
    int index;
    cout << "\n請輸入你想修改的紀錄編號（1 ~ " << records.size() << "）: ";
    cin >> index;

    if (index < 1 || index > records.size()) {
        cout << "輸入編號無效。" << endl;
        return;
    }

    Record& rec = records[index - 1];

    // 顯示修改選單
    int choice;
    cout << "\n你想修改哪一欄位？" << endl;
    cout << "1. 項目 (category)" << endl;
    cout << "2. 備註 (note)" << endl;
    cout << "3. 金額 (money)" << endl;
    cout << "4. 日期 (month/day)" << endl;
    cout << "請輸入選項編號: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "請輸入新的項目(category): ";
        cin >> rec.category;
        break;
    case 2:
        cout << "請輸入新的備註(note): ";
        cin >> rec.note;
        break;
    case 3:
        cout << "請輸入新的金額: ";
        cin >> rec.money;
        break;
    case 4:
        cout << "請輸入新的月份: ";
        cin >> rec.month;
        cout << "請輸入新的日期: ";
        cin >> rec.day;
        break;
    default:
        cout << "無效選項。" << endl;
        return;
    }

    // 寫回檔案
    ofstream outFile("records.txt");
    for (const auto& r : records) {
        outFile << r.category << " "
            << r.note << " "
            << fixed << setprecision(2) << r.money << " "
            << r.month << " "
            << r.day << endl;
    }
    outFile.close();

    cout << "紀錄修改完成！" << endl;
}