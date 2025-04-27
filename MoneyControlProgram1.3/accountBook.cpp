#include"accountBook.h"
#include <iostream>
#include <string>
#include <vector>
#include "enter.h"
accountBook::accountBook(){}
void accountBook::addRecord() {
    createRecord newRecord;
    newRecord.input();
    records.push_back(newRecord);
}

void accountBook::displayRecords(){
    if (records.empty()) {
        std::cout << "\n目前沒有任何記帳記錄。\n";
        return;
    }
    cout << "\n你輸入的所有記帳內容：" << endl;
    cout << "-------------------------" << endl;
    
    for (size_t i = 0; i < records.size(); ++i) {
        cout << "第 " << i + 1 << " 筆：" << endl;
        records[i].display();
        
    }
}

