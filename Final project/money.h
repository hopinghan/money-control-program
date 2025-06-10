#ifndef MONEY_H
#define MONEY_H

class Money {
private:
    double money;
public:
    Money();
    Money(double amt);
    double getAmount() const;
    void setAmount(double mon);
};

#endif

