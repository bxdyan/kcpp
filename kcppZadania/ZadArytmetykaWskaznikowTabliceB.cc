#include <iostream>
using namespace std;

int main() {
    double tab1[5], tab2[5], tab3[5];
    double* p1 = tab1;
    double* p2 = tab2;
    double* p3 = tab3;

    cout << "podaj 5 liczb:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "element " << i + 1 << ": ";
        cin >> *(p1 + i);
    }

    for (int i = 0; i < 5; i++) {
        *(p2 + i) = *(p1 + i) * 2;
    }

    for (int i = 0; i < 5; i++) {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }

    cout << "tablica 1: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p1 + i) << " ";
    }
    cout << endl;

    cout << "tablica 2: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p2 + i) << " ";
    }
    cout << endl;

    cout << "tablica 3: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p3 + i) << " ";
    }
    cout << endl;

    return 0;
}