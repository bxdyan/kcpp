#include <iostream>
using namespace std;

int main() {
    int tab[10];
    int* p = tab;

    for (int i = 0; i < 10; i++) {
        *(p + i) = i + 1;
    }

    cout << "tablica: ";
    for (int i = 0; i < 10; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    int suma = 0;
    for (int i = 0; i < 10; i++) {
        suma += *(p + i);
    }
    cout << "suma: " << suma << endl;

    int* maks = p;
    for (int i = 1; i < 10; i++) {
        if (*(p + i) > *maks) {
            maks = p + i;
        }
    }
    cout << "maksimum: " << *maks << endl;

    int* lewy = p;
    int* prawy = p + 9;
    while (lewy < prawy) {
        int temp = *lewy;
        *lewy = *prawy;
        *prawy = temp;
        lewy++;
        prawy--;
    }

    cout << "po odwroceniu: ";
    for (int i = 0; i < 10; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    return 0;
}