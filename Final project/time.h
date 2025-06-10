#ifndef TIME_H
#define TIME_H

class Date {
private:
    int month;
    int day;
public:
    Date();
    Date(int m, int d);
    void print() const;
    int getMonth() const;
    int getDay() const;
};

#endif
