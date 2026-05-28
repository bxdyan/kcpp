#include <iostream>
using namespace std;

// bitowo przez &
// np. dla liczby 5 (binarnie 101):
// 101 & 001 = 001 (koncowka to 1, czyli nieparzysta)
// dla liczby 6 (binarnie 110):
// 110 & 001 = 000 (koncowka to 0, czyli parzysta)

bool czyParzystaBitowo(int liczba) {
    return (liczba & 1) == 0;
}

// uzycie operatora modulo %
bool czyParzystaModulo(int liczba) {
    return liczba % 2 == 0;
}

// uzycie operatora warunkowego
bool czyParzystaWarunkowy(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

int main() {
    int liczba;
    cout << "podaj liczbe do sprawdzenia: ";
    cin >> liczba;
    
    if (czyParzystaBitowo(liczba)) {
        cout << "funkcja a (bitowo): liczba jest parzysta" << endl;
    } else {
        cout << "funkcja a (bitowo): liczba jest nieparzysta" << endl;
    }

    if (czyParzystaModulo(liczba)) {
        cout << "funkcja b (modulo): liczba jest parzysta" << endl;
    } else {
        cout << "funkcja b (modulo): liczba jest nieparzysta" << endl;
    }

    if (czyParzystaWarunkowy(liczba)) {
        cout << "funkcja c (warunkowy): liczba jest parzysta" << endl;
    } else {
        cout << "funkcja c (warunkowy): liczba jest nieparzysta" << endl;
    }

    return 0;
}