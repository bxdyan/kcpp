#include <iostream>
using namespace std;

// kazda zmienna zajmuje miejsce w pamieci operacyjnej komputera.
// operator "&"" zwraca adres pamieci pod ktorym przechowywana jest zmienna.
// zmienne lokalne sa alokowane na stosie.
// stos rosnie w kierunku nizszych adresow, wiec kolejne zmienne deklarowane w funkcji maja coraz nizsze adresy pamieci.

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    cout << "zmienna a = " << a << ", adres: " << &a << endl;
    cout << "zmienna b = " << b << ", adres: " << &b << endl;
    cout << "zmienna c = " << c << ", adres: " << &c << endl;

    if (&b < &a) {
        cout << "kolejne zmienne maja coraz nizsze adresy (stos rosnie w dol)" << endl;
    } else {
        cout << "kolejne zmienne maja coraz wyzsze adresy (stos rosnie w gore)" << endl;
    }

    return 0;
}