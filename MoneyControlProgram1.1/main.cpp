#include <iostream>
#include <string>
#include <iomanip>
#include "item.h"
#include "time.h"
#include "money.h"
using namespace std;

double sum(double summoney[], int size) {

}

int main() {
    Item item("Apple");
    item.print();

    Money m1(10.0), m2(25.5), m3(14.0);
    m1.print();
    m2.print();
    m3.print();

    double arr[] = { m1.getMoney(), m2.getMoney(), m3.getMoney() };
    cout << "Total Money: $" << sum(arr, 3) << endl;

    Date date(4, 25);
    date.print();

    return 0;
}