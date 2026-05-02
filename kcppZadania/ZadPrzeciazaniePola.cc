#include <iostream>

using namespace std;

double pole(double a) {
    return a * a;
}

double pole(double a, double b) {
    return a * b;
}

double pole(int r) {
    return 3.14 * r * r;
}

int main() {
    double bok = 5.0;
    double bok1 = 4.0, bok2 = 6.0;
    int promien = 3;

    cout << "pole kwadratu dla a = 5: " << pole(bok) << endl;
    cout << "pole prostokata dla a = 4, b = 6: " << pole(bok1, bok2) << endl;
    cout << "pole kola dla r = 3: " << pole(promien) << endl;

    return 0;
}