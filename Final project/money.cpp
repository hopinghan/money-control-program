#include "money.h"

Money::Money() : money(0.0) {}

Money::Money(double amt) : money(amt) {}

double Money::getAmount() const {
    return money;
}

void Money::setAmount(double amt) {
    money = amt;
}
