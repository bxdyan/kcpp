#include <iostream>
using namespace std;

void przesun(int* tab, int rozmiar) {
    int ostatni = *(tab + rozmiar - 1);
    for (int i = rozmiar - 1; i > 0; i--) {
        *(tab + i) = *(tab + i - 1);
    }
    *tab = ostatni;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int rozmiar = 5;

    cout << "przed przesunieciem: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    przesun(tab, rozmiar);

    cout << "po przesunieciu:     ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}