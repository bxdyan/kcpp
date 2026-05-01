#include <iostream>
#include <string>

using namespace std;

extern "C" void f1() {
    cout << "wynik dodawania: " << 10 + 20 << endl;
}

extern "C" void f2() {
    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 0) cout << i << " jest parzyste" << endl;
        else cout << i << " jest nieparzyste" << endl;
    }
}

void f3() {
    string tekst = "laboratorium";
    cout << tekst << " - ";
    for (int i = tekst.length() - 1; i >= 0; i--) {
        cout << tekst[i];
    }
    cout << endl;
}

void f4() {
    int podstawa = 2;
    int wynik = 1;
    for (int i = 0; i < 4; i++) {
        wynik *= podstawa;
    }
    cout << "2 do potegi 4 to: " << wynik << endl;
}

void f5() {
    double celsius = 20.0;
    double fahr = (celsius * 9.0 / 5.0) + 32.0;
    cout << celsius << " stopni c to " << fahr << " stopni f" << endl;
}

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; ++i) {
        string arg = argv[i];
        
        if (arg == "1") f1();
        else if (arg == "2") f2();
        else if (arg == "3") f3();
        else if (arg == "4") f4();
        else if (arg == "5") f5();
    }
    
    return 0;
}