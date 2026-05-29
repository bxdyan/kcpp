#include <iostream>
using namespace std;

int main() {
    int liczba, suma = 0, licznik = 0;

    cout << "wprowadzaj liczby (0 konczy program):" << endl;
    cin >> liczba;

    while (liczba != 0) {
        if (liczba <= 0) {
            cout << "liczba musi byc dodatnia" << endl;
        } else {
            suma += liczba;
            licznik++;
        }
        cin >> liczba;
    }

    cout << "suma wprowadzonych liczb: " << suma << endl;
    cout << "liczba wprowadzonych wartosci: " << licznik << endl;

    return 0;
}