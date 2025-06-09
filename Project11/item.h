#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
private:
    string name;
public:
    Item();
    Item(string n);
    string getName() const;
    void setName(string n);
};

#endif

