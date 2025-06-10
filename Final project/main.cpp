#include <iostream>
#include "accountBook.h"
using namespace std;

int main() {
    int choice;
    accountBook Records;

    do {
        cout << "\n============ 記帳系統選單 ============";
        cout << "\n| 1. 新增記帳                        |";
        cout << "\n| 2. 顯示所有記帳紀錄                 |";
        cout << "\n| 3. 修改資料                        |";
        cout << "\n| 0. 結束程式                        |";
        cout << "\n=====================================";
        cout << "\n請輸入選項: ";
        cin >> choice;

        switch (choice) {
        case 1:
            Records.addRecord();
            break;
        case 2:
            Records.displayRecords();
            break;
        case 3:
            Records.editRecords();
            break;
        case 0:
            cout << "再見！" << endl;
            break;
        default:
            cout << "無效的選項，請重新輸入。" << endl;
        }

    } while (choice != 0);

    return 0;
}

