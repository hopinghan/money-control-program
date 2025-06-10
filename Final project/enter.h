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

    void input();    // ��J�üg�J�ɮ�
    void display();  // �q�ɮ�Ū�������
    
};

#endif

