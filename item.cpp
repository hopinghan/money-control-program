#include "item.h"
Item::Item(){}
Item::Item(string n) {
	name = n;
}
void Item::setName(string n) {
	this->name = name;
}
string Item::getName() {
	return name;
}
void Item::print() {
	cout << name << endl;
}
