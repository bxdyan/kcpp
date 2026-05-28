#include <iostream>
using namespace std;

int* maxElement(int* tab, int rozmiar) {
    int* maks = tab;
    for (int i = 1; i < rozmiar; i++) {
        if (tab[i] > *maks) {
            maks = tab + i;
        }
    }
    return maks;
}

int main() {
    int tab[] = {3, 7, 1, 9, 4, 6};
    int rozmiar = 6;

    cout << "tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    int* maks = maxElement(tab, rozmiar);
    cout << "najwiekszy element: " << *maks << endl;

    return 0;
}