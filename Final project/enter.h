#ifndef ENTER_H
#define ENTER_H

#include <string>
#include "time.h"
#include<vector>

class createRecord {
private:
    double money;
    std::string category;
    std::string note;
    Date date;

public:
    createRecord();
    createRecord(double m, std::string c, std::string n, Date d);

    void input();    // 輸入並寫入檔案
    void display();  // 從檔案讀取並顯示
    
};

#endif

