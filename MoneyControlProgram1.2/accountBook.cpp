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
        std::cout << "\n�ثe�S������O�b�O���C\n";
        return;
    }
    cout << "\n�A��J���Ҧ��O�b���e�G" << endl;
    cout << "-------------------------" << endl;
    
    for (size_t i = 0; i < records.size(); ++i) {
        cout << "�� " << i + 1 << " ���G" << endl;
        records[i].display();
        
    }
}

