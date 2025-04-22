#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
using namespace std;
class Item {
private:
	string name;
public:
	Item();
	Item(string );
	string getName();
	void print();
};


#endif
