#include <iostream>
#include <string>
#include <iomanip>
#include "item.h"
#include "time.h"
#include "money.h"
#include "enter.h"
#include "accountBook.h"
using namespace std;

int main() {
    int choice;
	accountBook Records;
    do {
		cout << "\n============ �O�b�t�ο�� ============";
		cout << "\n| 1.�s�W�O�b�t��:                    | " << endl;
		cout << "\n| 2.��ܩҦ��O�b����:                | " << endl;
		cout << "\n| 0.�����{��:                        | " << endl;
		cout << "\n=====================================";
		cout << "\n�п�J�ﶵ: ";
		cin >> choice;

        switch (choice) {
        
        case 1:
            Records.addRecord();
            break;
        case 2:
            Records.displayRecords();
            break;
        case 0:
            cout << "�A���I" << endl;
            break;
        
        default:
            cout << "�L�Ī��ﶵ�A�Э��s��J�C" << endl;
            break;
        }

	} while (choice != 0 );

    return 0;
}