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
    cout << "\n�A��J���Ҧ��O�b���e�G" << endl;
    for (size_t i = 0; i < records.size(); ++i) {
        cout << "�� " << i + 1 << " ���G" << endl;
        records[i].display();
        cout << "-------------------------" << endl;
    }
}

