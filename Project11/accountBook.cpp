#include "accountBook.h"
#include <iostream>
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
