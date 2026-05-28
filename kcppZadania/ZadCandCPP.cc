#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int liczba = 42;
    double pi = 3.14159;

    printf("wypisanie w c: %d, %f\n", liczba, pi);
    cout << "wypisanie w c++: " << liczba << ", " << pi << endl;

    int wczytana_c;
    printf("wpisz liczbe (c): ");
    scanf("%d", &wczytana_c);

    int wczytana_cpp;
    cout << "wpisz liczbe (c++): ";
    cin >> wczytana_cpp;

    printf("wynik c: %d, wynik c++: %d\n", wczytana_c, wczytana_cpp);

    return 0;
}