#include <iostream>

using namespace std;

int przezWartosc() {
    int x = 10;
    return x;
}

int& przezReferencje(int& ref) {
    ref += 100;
    return ref;
}

int* przezWskaznik(int* ptr) {
    *ptr += 1;
    return ptr;
}

int* tablica() {
    static int tab[] = {1, 2, 3};
    return tab;
}

int main() {
    int a = 5;
    int b = 20;

    int w1 = przezWartosc();
    cout << "wartosc: " << w1 << endl;

    int& w2 = przezReferencje(a);
    cout << "referencja: " << w2 << " (zmienna a: " << a << ")" << endl;

    int* w3 = przezWskaznik(&b);
    cout << "wskaznik: " << *w3 << " (zmienna b: " << b << ")" << endl;

    int* w4 = tablica();
    cout << "tablica[0]: " << w4[0] << ", tablica[1]: " << w4[1] << endl;

    return 0;
}