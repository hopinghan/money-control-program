#include "accountBook.h"
#include <iostream>
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
