#include <iostream>
#include <string>

using namespace std;

class Osoba {
private:
    string imie;
    int wiek;

public:
    Osoba() {
        imie = "brak";
        wiek = 0;
    }

    Osoba(string i, int w) : imie(i), wiek(w) {}

    ~Osoba() {
        cout << "destruktor klasy" << endl;
    }

    void wyswietl() const {
        cout << "klasa: " << imie << " " << wiek << endl;
    }
};

int main() {
    Osoba o1;
    Osoba o2("jan", 20);

    o1.wyswietl();
    o2.wyswietl();

    return 0;
}