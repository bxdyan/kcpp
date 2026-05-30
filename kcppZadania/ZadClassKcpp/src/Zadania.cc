#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include "../include/Zadania.h"

using namespace std;


void ZadCandCPP::wykonaj() {
    int liczba = 42;
    double pi = 3.14159;

    printf("wypisanie w c: %d, %f\n", liczba, pi);
    cout << "wypisanie w c++: " << liczba << ", " << pi << endl;
}


void ZadDaneNaukoweFormat::wykonaj() {
    double pi = 3.141592;
    double e = 2.718281;
    double phi = 1.618033;

    cout << left << setw(15) << "stala"
         << " wartosc (domyslnie)    notacja stala      notacja naukowa" << endl;
    cout << "--------       -----------------     -------------      --------------" << endl;

    cout << left << setw(15) << "pi";
    cout << left << setw(22) << setprecision(6) << pi;
    cout << left << setw(19) << fixed << setprecision(6) << pi;
    cout << left << scientific << setprecision(6) << pi << endl;

    cout << defaultfloat;
    cout << left << setw(15) << "e";
    cout << left << setw(22) << setprecision(6) << e;
    cout << left << setw(19) << fixed << setprecision(6) << e;
    cout << left << scientific << setprecision(6) << e << endl;

    cout << defaultfloat;
    cout << left << setw(15) << "zloty podzial";
    cout << left << setw(22) << setprecision(6) << phi;
    cout << left << setw(19) << fixed << setprecision(6) << phi;
    cout << left << scientific << setprecision(6) << phi << endl;

    cout << defaultfloat << setprecision(6);
}


void ZadAdresowaniePamieci::wykonaj() {
    int a = 10;
    int b = 20;
    int c = 30;

    cout << "zmienna a = " << a << ", adres: " << &a << endl;
    cout << "zmienna b = " << b << ", adres: " << &b << endl;
    cout << "zmienna c = " << c << ", adres: " << &c << endl;

    if (&b < &a) {
        cout << "kolejne zmienne maja coraz nizsze adresy (stos rosnie w dol)" << endl;
    } else {
        cout << "kolejne zmienne maja coraz wyzsze adresy (stos rosnie w gore)" << endl;
    }
}


void ZadArytmetykaWskaznikowZamiana::zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ZadArytmetykaWskaznikowZamiana::wykonaj() {
    int x = 10, y = 20;

    cout << "przed zamiana: x = " << x << ", y = " << y << endl;
    zamien(&x, &y);
    cout << "po zamianie:   x = " << x << ", y = " << y << endl;
}


int ZadArytmetykaWskaznikowSuma::suma(int* tab, int rozmiar) {
    int wynik = 0;
    for (int i = 0; i < rozmiar; i++) {
        wynik += tab[i];
    }
    return wynik;
}

void ZadArytmetykaWskaznikowSuma::wykonaj() {
    int tab[] = {1, 2, 3, 4, 5};
    int rozmiar = 5;

    cout << "tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    cout << "suma: " << suma(tab, rozmiar) << endl;
}


void ZadCharExample::wykonaj() {
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
}


int ZadPrzeciazaniePotega::potega(int podstawa, int wykladnik) {
    int wynik = 1;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}

double ZadPrzeciazaniePotega::potega(double podstawa, int wykladnik) {
    double wynik = 1.0;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}

void ZadPrzeciazaniePotega::wykonaj() {
    int a = 3, n1 = 4;
    double b = 2.5;
    int n2 = 3;

    cout << "potega int:    " << a << " ^ " << n1 << " = " << potega(a, n1) << endl;
    cout << "potega double: " << b << " ^ " << n2 << " = " << potega(b, n2) << endl;
}


class Osoba {
private:
    string imie;
    int wiek;

public:
    Osoba() {
        imie = "brak";
        wiek = 0;
    }

    Osoba(string i, int w) : imie(i), wiek(w) {}

    ~Osoba() {
        cout << "destruktor klasy" << endl;
    }

    void wyswietl() const {
        cout << "klasa: " << imie << " " << wiek << endl;
    }
};

void ZadKlasaKonstruktor::wykonaj() {
    Osoba o1;
    Osoba o2("jan", 20);

    o1.wyswietl();
    o2.wyswietl();
}


class GFG;

class Geeks {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    Geeks() {
        private_variable = 10;
        protected_variable = 99;
    }

    friend class GFG;

    void displayGFG(GFG& g);
};

class GFG {
private:
    int gfg_private;

public:
    GFG() {
        gfg_private = 500;
    }

    friend class Geeks;

    void displayGeeks(Geeks& t) {
        cout << "wartosc zmiennej prywatnej = " << t.private_variable << endl;
        cout << "wartosc zmiennej chronionej = " << t.protected_variable << endl;
    }
};

void Geeks::displayGFG(GFG& g) {
    cout << "wartosc prywatnej zmiennej gfg = " << g.gfg_private << endl;
}

void ZadPrzyjazn::wykonaj() {
    Geeks g;
    GFG fri;

    fri.displayGeeks(g);
    g.displayGFG(fri);
}


class Figura {
public:
    virtual void Narysuj() = 0;
    virtual double Obwod() = 0;
    virtual double Pole() = 0;
    virtual ~Figura() {}
};

class Kwadrat : public Figura {
private:
    double a;

public:
    Kwadrat(double bok) : a(bok) {}

    void Narysuj() { cout << "przepis na narysowanie kwadrata" << endl; }
    double Obwod() { return 4 * a; }
    double Pole() { return a * a; }
};

class Trojkat : public Figura {
private:
    double a, b, c, h;

public:
    Trojkat(double bokA, double bokB, double bokC, double wysokosc) : a(bokA), b(bokB), c(bokC), h(wysokosc) {}

    void Narysuj() { cout << "przepis na narysowanie trojkata" << endl; }
    double Obwod() { return a + b + c; }
    double Pole() { return 0.5 * a * h; }
};

class Prostokat : public Figura {
private:
    double a, b;

public:
    Prostokat(double bokA, double bokB) : a(bokA), b(bokB) {}

    void Narysuj() { cout << "przepis na narysowanie prostokata" << endl; }
    double Obwod() { return 2 * a + 2 * b; }
    double Pole() { return a * b; }
};

class Kolo : public Figura {
private:
    double r;

public:
    Kolo(double promien) : r(promien) {}

    void Narysuj() { cout << "przepis na narysowanie kola" << endl; }
    double Obwod() { return 2 * M_PI * r; }
    double Pole() { return M_PI * r * r; }

    double Dystans(double x) {
        return sqrt(x / M_PI);
    }
};

void ZadMetodyAbstrakcyjne::wykonaj() {
    Figura *objKwadrat = new Kwadrat(4.0);
    objKwadrat->Narysuj();
    cout << "obwod: " << objKwadrat->Obwod() << ", pole: " << objKwadrat->Pole() << endl;

    Figura *objTrojkat = new Trojkat(3.0, 4.0, 5.0, 4.0);
    objTrojkat->Narysuj();
    cout << "obwod: " << objTrojkat->Obwod() << ", pole: " << objTrojkat->Pole() << endl;

    Figura *objProstokat = new Prostokat(3.0, 5.0);
    objProstokat->Narysuj();
    cout << "obwod: " << objProstokat->Obwod() << ", pole: " << objProstokat->Pole() << endl;

    Kolo *objKolo = new Kolo(2.0);
    objKolo->Narysuj();
    cout << "obwod: " << objKolo->Obwod() << ", pole: " << objKolo->Pole() << endl;

    double x = 15.0;
    cout << "dla " << x << " metrow kwadratowych kolejna osoba moze byc w odleglosci: " << objKolo->Dystans(x) << " m" << endl;

    delete objKwadrat;
    delete objTrojkat;
    delete objProstokat;
    delete objKolo;
}
