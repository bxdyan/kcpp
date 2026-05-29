#include <iostream>
using namespace std;

int main() {
    int n;
    long long silnia = 1;
    long long suma = 0;

    cout << "podaj liczbe: ";
    cin >> n;

    if (n < 0) {
        cout << "silnia nie jest zdefiniowana dla liczb ujemnych" << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        silnia *= i;
        suma += silnia;
    }

    cout << "suma silni od 1 do " << n << " wynosi: " << suma << endl;

    return 0;
}