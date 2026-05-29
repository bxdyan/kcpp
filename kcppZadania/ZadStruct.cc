#include <iostream>
#include <string>

using namespace std;

struct Student {
    string imie;
    int wiek;
    double ocena;

    Student() {
        imie = "brak";
        wiek = 0;
        ocena = 0.0;
    }

    Student(string i, int w, double o) : imie(i), wiek(w), ocena(o) {}

    void wyswietl() const {
        cout << "student: " << imie << ", wiek: " << wiek << ", ocena: " << ocena << endl;
    }
};

int main() {
    Student s1; 
    Student s2("jan", 21, 4.5);
    Student s3 = {"anna", 20, 5.0}; 

    s1.wyswietl();
    s2.wyswietl();
    s3.wyswietl();

    s1.imie = "krzysztof";
    s1.wiek = 22;
    s1.ocena = 3.5;

    cout << "s1: " << s1.imie << " " << s1.wiek << " " << s1.ocena << endl;

    return 0;
}