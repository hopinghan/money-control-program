#ifndef ACCOUNTBOOK_H
#define ACCOUNTBOOK_H
#include <iostream>
#include <string>
#include <vector>
#include "enter.h"
using namespace std;
class accountBook
{
private:
	vector <creatRecord> records; // 用於存儲記錄的向量
public:
	accountBook();
	accountBook();
	void addRecord(); // 添加記錄
	void displayRecords(); // 顯示所有記錄
};
#endif 
