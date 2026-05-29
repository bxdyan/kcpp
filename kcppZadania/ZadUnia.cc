#include <iostream>

using namespace std;

union Dane {
    int calkowita;
    float zmiennoprzecinkowa;
    char znak;
};

int main() {
    Dane u;

    u.calkowita = 65;
    cout << u.calkowita << endl;

    u.zmiennoprzecinkowa = 3.14f;
    cout << u.zmiennoprzecinkowa << endl;
    cout << u.calkowita << endl;

    u.znak = 'X';
    cout << u.znak << endl;
    cout << u.calkowita << endl;

    return 0;
}