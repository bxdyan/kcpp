#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int poziom, zakres = 100;

    cout << "wybierz poziom trudnosci (1 - latwy 1-50, 2 - sredni 1-100, 3 - trudny 1-200): ";
    cin >> poziom;

    if (poziom == 1) {
        zakres = 50;
    } else if (poziom == 3) {
        zakres = 200;
    } else {
        zakres = 100;
    }

    int wylosowana = rand() % zakres + 1;
    int proba, licznik = 0;

    cout << "zgadnij liczbe (1-" << zakres << "):" << endl;

    while (licznik < 10) {
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "za malo! probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "za duzo! probuj dalej." << endl;
        } else {
            cout << "brawo! zgadles w " << licznik << " probach." << endl;
            return 0;
        }
    }

    cout << "koniec prob! prawidlowa liczba to: " << wylosowana << endl;

    return 0;
}