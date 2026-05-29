#include <iostream>
#include <string>

using namespace std;

struct Pracownik {
    string stanowisko;
    double pensja;

    Pracownik() {
        stanowisko = "brak";
        pensja = 0.0;
    }

    Pracownik(string s, double p) : stanowisko(s), pensja(p) {}

    ~Pracownik() {
        cout << "destruktor struktury" << endl;
    }

    void wyswietl() const {
        cout << "struktura: " << stanowisko << " " << pensja << endl;
    }
};

int main() {
    Pracownik p1;
    Pracownik p2("programista", 5000.0);

    p1.wyswietl();
    p2.wyswietl();

    return 0;
}