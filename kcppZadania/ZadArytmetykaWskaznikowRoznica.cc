#include <iostream>
using namespace std;

int main() {
    int tab[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int* p1 = tab + 2;
    int* p2 = tab + 7;

    cout << "tablica: ";
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    cout << "p1 wskazuje na: " << *p1 << " (indeks 2)" << endl;
    cout << "p2 wskazuje na: " << *p2 << " (indeks 7)" << endl;
    cout << "roznica wskaznikow: " << p2 - p1 << endl;

    return 0;
}