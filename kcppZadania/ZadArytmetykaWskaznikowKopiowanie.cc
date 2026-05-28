#include <iostream>
using namespace std;

void kopiujTablice(int* zrodlo, int* cel, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cel[i] = zrodlo[i];
    }
}

int main() {
    int zrodlo[] = {1, 2, 3, 4, 5};
    int cel[5];
    int rozmiar = 5;

    kopiujTablice(zrodlo, cel, rozmiar);

    cout << "zrodlo: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << zrodlo[i] << " ";
    }
    cout << endl;

    cout << "cel:    ";
    for (int i = 0; i < rozmiar; i++) {
        cout << cel[i] << " ";
    }
    cout << endl;

    return 0;
}