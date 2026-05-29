#include <iostream>
using namespace std;

int main() {
    int rozmiar;
    cout << "podaj rozmiar: ";
    cin >> rozmiar;

    cout << "\nkwadrat:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < rozmiar; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\ntrojkat prostokatny:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\ntrojkat rownoramienny:" << endl;
    for (int i = 1; i <= rozmiar; i++) {
        for (int j = i; j < rozmiar; j++) {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\npiramida z liczb:" << endl;
    for (int i = 1; i <= rozmiar; i++) {
        for (int j = i; j < rozmiar; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}