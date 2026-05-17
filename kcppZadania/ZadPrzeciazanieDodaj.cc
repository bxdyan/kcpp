#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int dodaj(int a, int b) {
    return a + b;
}

double dodaj(double a, double b) {
    return a + b;
}

string dodaj(string a, string b) {
    return a + b;
}

int main() {
    int x1 = 3, x2 = 7;
    double d1 = 2.5, d2 = 1.5;
    string s1 = "hello ", s2 = "world";

    cout << "dodaj int:    " << dodaj(x1, x2) << endl;
    cout << "dodaj double: " << fixed << setprecision(1) << dodaj(d1, d2) << endl;
    cout << "dodaj string: " << dodaj(s1, s2) << endl;

    return 0;
}