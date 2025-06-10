#ifndef ACCOUNTBOOK_H
#define ACCOUNTBOOK_H

#include <vector>
#include "enter.h"

class accountBook {
private:
    std::vector<createRecord> records;

public:
    accountBook();
    void addRecord();        // 新增記帳記錄
    void displayRecords();   // 顯示所有記錄
    void editRecords();
};

#endif
