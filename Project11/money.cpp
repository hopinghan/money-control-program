#include "money.h"

Money::Money() : amount(0.0) {}

Money::Money(double amt) : amount(amt) {}

double Money::getAmount() const {
    return amount;
}

void Money::setAmount(double amt) {
    amount = amt;
}
