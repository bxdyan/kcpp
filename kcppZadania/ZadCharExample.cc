#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char tekst1[] = "poczatkowy napis";
    char tekst2[30] = "zaliczenie";
    char tekst3[50] = " dodatek";

    cout << "tekst1: " << tekst1 << endl;
    cout << "tekst2: " << tekst2 << endl;
    cout << "tekst3: " << tekst3 << endl;

    cout << "dlugosc tekst1: " << strlen(tekst1) << endl;

    strncpy(tekst2, tekst1, 5);
    tekst2[5] = '\0';
    cout << "tekst2 po strncpy: " << tekst2 << endl;

    char polaczone[60] = "wynik: ";
    strcat(polaczone, tekst1);
    cout << "po strcat: " << polaczone << endl;

    if (strcmp(tekst1, "poczatkowy napis") == 0) {
        cout << "napisy pasuja" << endl;
    } else {
        cout << "napisy sie roznia" << endl;
    }

    char kopia[20];
    strcpy(kopia, "koniec");
    cout << "ostatni string: " << kopia << " (len: " << strlen(kopia) << ")" << endl;

    return 0;
}