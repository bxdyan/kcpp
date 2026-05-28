#include <iostream>
using namespace std;

void Funkcja1() {
    int tab[] = {10, 20, 30, 40, 50};
    int* p = tab;

    // p++ - przesuniecie wskaznika
    cout << "--- p++ ---" << endl;
    cout << "przed: p=" << *p << endl;
    p++;
    cout << "po:    p=" << *p << endl;
    p = tab;

    // ++p - to samo co p++
    cout << "--- ++p ---" << endl;
    cout << "przed: p=" << *p << endl;
    ++p;
    cout << "po:    p=" << *p << endl;
    p = tab;

    // ++*p - zwiekszenie wartosci pod wskaznikiem
    cout << "--- ++*p ---" << endl;
    cout << "przed: *p=" << *p << endl;
    ++*p;
    cout << "po:    *p=" << *p << endl;
    p = tab;
    tab[0] = 10;

    // ++(*p) - to samo co ++*p
    cout << "--- ++(*p) ---" << endl;
    cout << "przed: *p=" << *p << endl;
    ++(*p);
    cout << "po:    *p=" << *p << endl;
    p = tab;
    tab[0] = 10;

    // ++*(p) - to samo co ++*p
    cout << "--- ++*(p) ---" << endl;
    cout << "przed: *p=" << *p << endl;
    ++*(p);
    cout << "po:    *p=" << *p << endl;
    p = tab;
    tab[0] = 10;

    // *p++ - odczyt wartosci, potem przesuniecie
    cout << "--- *p++ ---" << endl;
    cout << "przed: p=" << *p << endl;
    int x = *p++;
    cout << "po:    odczytano=" << x << ", p=" << *p << endl;
    p = tab;

    // (*p)++ - zwiekszenie wartosci, wskaznik bez zmian
    cout << "--- (*p)++ ---" << endl;
    cout << "przed: *p=" << *p << endl;
    (*p)++;
    cout << "po:    *p=" << *p << endl;
    p = tab;
    tab[0] = 10;

    // *(p)++ - to samo co *p++
    cout << "--- *(p)++ ---" << endl;
    cout << "przed: p=" << *p << endl;
    int y = *(p)++;
    cout << "po:    odczytano=" << y << ", p=" << *p << endl;
    p = tab;

    // *++p - przesuniecie wskaznika, potem odczyt
    cout << "--- *++p ---" << endl;
    cout << "przed: p=" << *p << endl;
    int z = *++p;
    cout << "po:    odczytano=" << z << ", p=" << *p << endl;
    p = tab;

    // *(++p) - to samo co *++p
    cout << "--- *(++p) ---" << endl;
    cout << "przed: p=" << *p << endl;
    int w = *(++p);
    cout << "po:    odczytano=" << w << ", p=" << *p << endl;
}

void Funkcja2() {
    int a = 0, b = 0, c = 0;
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    cout << "1.  A, B, C: " << a << "  " << b << "   " << c << endl;
    *pb = 10;
    cout << "2.  A, B, C: " << a << "  " << b << "  " << c << endl;
    *pc = 20;
    cout << "3.  A, B, C: " << a << "  " << b << "  " << c << endl;
    *pb = *pb + *pc;
    cout << "4.  A, B, C: " << a << "  " << b << "  " << c << endl;
    *pa = 40;
    cout << "5.  A, B, C: " << a << " " << b << "  " << c << endl;
    *pb = 50;
    cout << "6.  A, B, C: " << a << " " << b << "  " << c << endl;
    *pc = 60;
    cout << "7.  A, B, C: " << a << " " << b << "  " << c << endl;
    *pb = *pb + *pc;
    cout << "8.  A, B, C: " << a << " " << b << "  " << c << endl;
    *pa = 80;
    cout << "9.  A, B, C: " << a << " " << b << "  " << c << endl;
    *pb = 90;
    cout << "10. A, B, C: " << a << " " << b << "  " << c << endl;
}

int main() {
    Funkcja1();
    cout << endl;
    Funkcja2();

    return 0;
}