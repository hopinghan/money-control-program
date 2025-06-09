#include "item.h"

Item::Item() : name("") {}

Item::Item(string n) : name(n) {}

string Item::getName() const {
    return name;
}

void Item::setName(string n) {
    name = n;
}

