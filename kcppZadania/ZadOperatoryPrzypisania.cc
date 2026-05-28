#include <iostream>
using namespace std;

void OperatoryArytmetyczne() {
    int a = 10;
    int b = 3;

    cout << "a = " << a << ", b = " << b << endl;
    cout << "dodawanie: " << a + b << endl;
    cout << "odejmowanie: " << a - b << endl;
    cout << "mnozenie: " << a * b << endl;
    cout << "dzielenie: " << a / b << endl;
    cout << "reszta z dzielenia: " << a % b << endl;
}

void OperatoryPrzypisania() {
    int x = 10;
    cout << "wartosc poczatkowa: " << x << endl;

    x += 5;
    cout << "po dodaniu 5: " << x << endl;

    x -= 3;
    cout << "po odjeciu 3: " << x << endl;

    x *= 2;
    cout << "po pomnozeniu przez 2: " << x << endl;

    x /= 4;
    cout << "po podzieleniu przez 4: " << x << endl;

    x %= 2;
    cout << "reszta z dzielenia przez 2: " << x << endl;
}

int main() {
    OperatoryArytmetyczne();
    cout << endl;
    OperatoryPrzypisania();

    return 0;
}