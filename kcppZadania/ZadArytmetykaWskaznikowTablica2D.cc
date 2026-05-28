#include <iostream>
using namespace std;

// tablica dwuwymiarowa w pamieci lezy jako jeden ciagly blok.
// najpierw caly pierwszy wiersz, potem drugi, potem trzeci.
// kazdy kolejny element ma adres wiekszy o 4 bajty (tyle zajmuje int).

int main() {
    int tab[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int* p = &tab[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "tab[" << i << "][" << j << "] = " << *(p + i * 3 + j)
                 << ", adres: " << (p + i * 3 + j) << endl;
        }
    }

    return 0;
}