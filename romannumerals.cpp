// Challenge Extra 1: Decimal to Roman Numeral Conversion
#include <iostream>
using namespace std;

int main() {

    int usernum;
    cout << "Enter a number: ";
    cin >> usernum;

    if (usernum <= 0 || usernum >= 1000) {
        cout << "Invalid input. Program terminated." << endl;
        return 0;
    }

    while (usernum > 0) {
        if (usernum >= 900) {
            cout << "CM";
            usernum -= 900;
        }
        else if (usernum >= 500) {
            cout << "D";
            usernum -= 500;
        }
        else if (usernum >= 400) {
            cout << "CD";
            usernum -= 400;
        }
        else if (usernum >= 100) {
            cout << "C";
            usernum -= 100;
        }
        else if (usernum >= 90) {
            cout << "XC";
            usernum -= 90;
        }
        else if (usernum >= 50) {
            cout << "L";
            usernum -= 50;
        }
        else if (usernum >= 40) {
            cout << "XL";
            usernum -= 40;
        }
        else if (usernum >= 10) {
            cout << "X";
            usernum -= 10;
        }
        else if (usernum >= 9) {
            cout << "IX";
            usernum -= 9;
        }
        else if (usernum >= 5) {
            cout << "V";
            usernum -= 5;
        }
        else if (usernum >= 4) {
            cout << "IV";
            usernum -= 4;
        }
        else {
            cout << "I";
            usernum -= 1;
        }
    }

    cout << endl;
    return 0;
}
