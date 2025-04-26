#include"accountBook.h"
#include <iostream>
#include <string>
#include <vector>
#include "enter.h"
accountBook::accountBook(){}
void accountBook::addRecord() {
    creatRecord newRecord;
    newRecord.input();
    records.push_back(newRecord);
}

void accountBook::displayRecords(){
    cout << "\n你輸入的所有記帳內容：" << endl;
    for (size_t i = 0; i < records.size(); ++i) {
        cout << "第 " << i + 1 << " 筆：" << endl;
        records[i].display();
        cout << "-------------------------" << endl;
    }
}

