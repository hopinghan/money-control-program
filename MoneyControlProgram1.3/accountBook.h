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
	vector <createRecord> records; // �Ω�s�x�O�����V�q
public:
	accountBook();
	void addRecord(); // �K�[�O��
	void displayRecords(); // ��ܩҦ��O��
};
#endif 
