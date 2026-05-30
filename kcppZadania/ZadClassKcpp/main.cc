#include <iostream>
#include "include/Zadania.h"
#include <cstdlib> 

using namespace std;

int main() {
    int wybor = -1;
    ZadKcpp* zadanie = nullptr;

    while (wybor != 0) {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        cout << "=== menu zadan ===" << endl << endl;
        cout << "sekcja 1: wejscie i wyjscie" << endl;
        cout << "  1. c vs c++ - printf i scanf vs cin i cout" << endl;
        cout << "  2. formatowanie - tabela stalych naukowych" << endl << endl;
        cout << "sekcja 2: wskazniki i pamiec" << endl;
        cout << "  3. adresy - zmienne na stosie i ich adresy" << endl;
        cout << "  4. zamiana - swap dwoch zmiennych przez wskazniki" << endl;
        cout << "  5. suma - sumowanie tablicy przez wskaznik" << endl << endl;
        cout << "sekcja 3: napisy" << endl;
        cout << "  6. char - strlen, strncpy, strcat, strcmp" << endl << endl;
        cout << "sekcja 4: funkcje" << endl;
        cout << "  7. przeciazanie - funkcja potega dla int i double" << endl << endl;
        cout << "sekcja 5: obiektowosc" << endl;
        cout << "  8. konstruktor - klasa osoba z konstruktorem i destruktorem" << endl;
        cout << "  9. przyjazn - friend class, dostep do prywatnych pol" << endl;
        cout << " 10. abstrakcja - figura, kwadrat, trojkat, prostokat, kolo (zad. 5.6)" << endl << endl;
        cout << "  0. wyjscie" << endl << endl;
        cout << "wybierz zadanie: ";
        cin >> wybor;

        switch (wybor) {
            case 1:  zadanie = new ZadCandCPP();                    break;
            case 2:  zadanie = new ZadDaneNaukoweFormat();            break;
            case 3:  zadanie = new ZadAdresowaniePamieci();           break;
            case 4:  zadanie = new ZadArytmetykaWskaznikowZamiana();  break;
            case 5:  zadanie = new ZadArytmetykaWskaznikowSuma();     break;
            case 6:  zadanie = new ZadCharExample();                  break;
            case 7:  zadanie = new ZadPrzeciazaniePotega();           break;
            case 8:  zadanie = new ZadKlasaKonstruktor();             break;
            case 9:  zadanie = new ZadPrzyjazn();                     break;
            case 10: zadanie = new ZadMetodyAbstrakcyjne();           break;
            case 0:  cout << "koniec programu" << endl; continue;
            default: cout << "nieznana opcja. Nacisnij Enter..." << endl; 
                     cin.ignore(); cin.get();
                     continue;
        }

        if (zadanie != nullptr) {
            cout << endl;
            zadanie->wykonaj();
            delete zadanie;
            zadanie = nullptr;

            cout << endl << "nacisnij enter zeby wrocic do wyboru..." << endl;
            cin.ignore();
            cin.get();
        }
    }

    return 0;
}