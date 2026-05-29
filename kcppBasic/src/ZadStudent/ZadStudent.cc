#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string imie;
    string nazwisko;
    int indeks;
};

bool porownajStudentow(const Student &a, const Student &b) {
    if (a.nazwisko != b.nazwisko) {
        return a.nazwisko < b.nazwisko;
    }
    return a.imie < b.imie;
}

int main() {
    vector<Student> listaStudentow;
    int wybor;

    do {
        cout << "\nmenu:" << endl;
        cout << "1. dodaj studenta" << endl;
        cout << "2. usun studenta" << endl;
        cout << "3. wyswietl liste" << endl;
        cout << "4. sortuj liste" << endl;
        cout << "5. sprawdz, czy student istnieje" << endl;
        cout << "0. wyjdz" << endl;
        cout << "wybierz opcje: ";
        cin >> wybor;
        cin.ignore();

        switch (wybor) {
            case 1: {
                Student s;
                cout << "podaj imie: ";
                getline(cin, s.imie);
                cout << "podaj nazwisko: ";
                getline(cin, s.nazwisko);
                cout << "podaj numer indeksu: ";
                cin >> s.indeks;
                cin.ignore();

                if (s.imie.empty() || s.nazwisko.empty()) {
                    cout << "imie i nazwisko nie moga byc puste" << endl;
                    break;
                }

                bool unikalny = true;
                for (const auto &student : listaStudentow) {
                    if (student.indeks == s.indeks) {
                        unikalny = false;
                        break;
                    }
                }

                if (!unikalny) {
                    cout << "student o takim indeksie juz istnieje" << endl;
                } else {
                    listaStudentow.push_back(s);
                    cout << "dodano studenta" << endl;
                }
                break;
            }
            case 2: {
                if (listaStudentow.empty()) {
                    cout << "lista jest pusta" << endl;
                    break;
                }
                int szukanyIndeks;
                cout << "podaj numer indeksu studenta do usuniecia: ";
                cin >> szukanyIndeks;
                cin.ignore();

                bool usunieto = false;
                for (auto it = listaStudentow.begin(); it != listaStudentow.end(); ++it) {
                    if (it->indeks == szukanyIndeks) {
                        listaStudentow.erase(it);
                        cout << "usunieto studenta" << endl;
                        usunieto = true;
                        break;
                    }
                }

                if (!usunieto) {
                    cout << "nie znaleziono studenta o takim indeksie" << endl;
                }
                break;
            }
            case 3: {
                if (listaStudentow.empty()) {
                    cout << "lista jest pusta" << endl;
                } else {
                    cout << "\nlista studentow:" << endl;
                    for (const auto &student : listaStudentow) {
                        cout << student.imie << " " << student.nazwisko << " (indeks: " << student.indeks << ")" << endl;
                    }
                }
                break;
            }
            case 4: {
                sort(listaStudentow.begin(), listaStudentow.end(), porownajStudentow);
                cout << "posortowano liste" << endl;
                break;
            }
            case 5: {
                int szukanyIndeks;
                cout << "podaj numer indeksu do sprawdzenia: ";
                cin >> szukanyIndeks;
                cin.ignore();

                bool istnieje = false;
                for (const auto &student : listaStudentow) {
                    if (student.indeks == szukanyIndeks) {
                        istnieje = true;
                        break;
                    }
                }

                if (istnieje) {
                    cout << "student jest na liscie" << endl;
                } else {
                    cout << "nie ma takiego studenta" << endl;
                }
                break;
            }
            case 0: {
                cout << "koniec programu" << endl;
                break;
            }
            default: {
                cout << "nieprawidlowa opcja" << endl;
                break;
            }
        }
    } while (wybor != 0);

    return 0;
}