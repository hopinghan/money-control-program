#ifndef MONEY_H
#define MONEY_H

class Money {
private:
    double amount;
public:
    Money();
    Money(double amt);
    double getAmount() const;
    void setAmount(double amt);
};

#endif

