#ifndef ACCOUNTBOOK_H
#define ACCOUNTBOOK_H

#include <vector>
#include "enter.h"

class accountBook {
private:
    std::vector<createRecord> records;

public:
    accountBook();
    void addRecord();        // �s�W�O�b�O��
    void displayRecords();   // ��ܩҦ��O��
    void editRecords();
};

#endif
