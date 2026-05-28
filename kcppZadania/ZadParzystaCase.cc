#include <iostream>
using namespace std;

// (a) bitowo przez &
// np. dla liczby 5 (binarnie 101):
// 101 & 001 = 001 (koncowka to 1, czyli nieparzysta)
// dla liczby 6 (binarnie 110):
// 110 & 001 = 000 (koncowka to 0, czyli parzysta)
bool czyParzystaBitowo(int liczba) {
    return (liczba & 1) == 0;
}

// (b) klasycznie przez modulo
bool czyParzystaModulo(int liczba) {
    return liczba % 2 == 0;
}

// (c) operator warunkowy zamiast zwyklego if
bool czyParzystaWarunkowy(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

int main() {
    int liczba;
    int wybor;

    cout << "podaj liczbe: ";
    cin >> liczba;

    cout << "wybierz metode sprawdzenia:" << endl;
    cout << "1 - bitowo (&)" << endl;
    cout << "2 - modulo (%)" << endl;
    cout << "3 - operator warunkowy" << endl;
    cout << "twoj wybor: ";
    cin >> wybor;

    switch (wybor) {
        case 1:
            if (czyParzystaBitowo(liczba)) {
                cout << "metoda bitowa: parzysta" << endl;
            } else {
                cout << "metoda bitowa: nieparzysta" << endl;
            }
            break;

        case 2:
            if (czyParzystaModulo(liczba)) {
                cout << "metoda modulo: parzysta" << endl;
            } else {
                cout << "metoda modulo: nieparzysta" << endl;
            }
            break;

        case 3:
            if (czyParzystaWarunkowy(liczba)) {
                cout << "operator warunkowy: parzysta" << endl;
            } else {
                cout << "operator warunkowy: nieparzysta" << endl;
            }
            break;

        default:
            cout << "zle wybrales, brak takiej opcji" << endl;
            break;
    }

    return 0;
}