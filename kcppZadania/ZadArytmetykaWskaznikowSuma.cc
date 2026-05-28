#include <iostream>
using namespace std;

int suma(int* tab, int rozmiar) {
    int wynik = 0;
    for (int i = 0; i < rozmiar; i++) {
        wynik += tab[i];
    }
    return wynik;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int rozmiar = 5;

    cout << "tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    cout << "suma: " << suma(tab, rozmiar) << endl;

    return 0;
}