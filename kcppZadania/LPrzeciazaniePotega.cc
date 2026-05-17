#include <iostream>
using namespace std;

int potega(int podstawa, int wykladnik) {
    int wynik = 1;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}

double potega(double podstawa, int wykladnik) {
    double wynik = 1.0;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}

int main() {
    int a = 3, n1 = 4;
    double b = 2.5;
    int n2 = 3;

    cout << "potega int:    " << a << " ^ " << n1 << " = " << potega(a, n1) << endl;
    cout << "potega double: " << b << " ^ " << n2 << " = " << potega(b, n2) << endl;

    return 0;
}