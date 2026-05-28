#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string tekst = "jan 25 180.5";
    stringstream ss(tekst);

    string imie;
    int wiek;
    double wzrost;

    ss >> imie >> wiek >> wzrost;

    cout << "imie: " << imie << endl;
    cout << "wiek: " << wiek << endl;
    cout << "wzrost: " << wzrost << endl;

    stringstream ss2;
    ss2 << imie << "_" << wiek << "_" << wzrost;
    string wynik = ss2.str();

    cout << "polaczony tekst: " << wynik << endl;

    return 0;
}