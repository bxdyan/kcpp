#include <iostream>
#include <string>
using namespace std;

// switch nie obsluguje bezposrednio typu string
// dlatego zamiast switch uzywamy if-else if do sprawdzania slow

bool czyParzystaBitowo(int liczba) {
    return (liczba & 1) == 0;
}

bool czyParzystaModulo(int liczba) {
    return liczba % 2 == 0;
}

bool czyParzystaWarunkowy(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

int main() {
    int liczba;
    string wybor;

    cout << "podaj liczbe: ";
    cin >> liczba;

    cout << "wybierz metode (wpisz: bitowo, modulo lub warunkowy): ";
    cin >> wybor;

    if (wybor == "bitowo") {
        if (czyParzystaBitowo(liczba)) {
            cout << "metoda bitowa: parzysta" << endl;
        } else {
            cout << "metoda bitowa: nieparzysta" << endl;
        }
    } 
    else if (wybor == "modulo") {
        if (czyParzystaModulo(liczba)) {
            cout << "metoda modulo: parzysta" << endl;
        } else {
            cout << "metoda modulo: nieparzysta" << endl;
        }
    } 
    else if (wybor == "warunkowy") {
        if (czyParzystaWarunkowy(liczba)) {
            cout << "operator warunkowy: parzysta" << endl;
        } else {
            cout << "operator warunkowy: nieparzysta" << endl;
        }
    } 
    else {
        cout << "zle wybrales, brak takiej opcji" << endl;
    }

    return 0;
}