#ifndef ZADANIA_H
#define ZADANIA_H

#include "ZadKcpp.h"

class ZadCandCPP : public ZadKcpp {
public:
    void wykonaj();
};

class ZadDaneNaukoweFormat : public ZadKcpp {
public:
    void wykonaj();
};

class ZadAdresowaniePamieci : public ZadKcpp {
public:
    void wykonaj();
};

class ZadArytmetykaWskaznikowZamiana : public ZadKcpp {
private:
    void zamien(int* a, int* b);
public:
    void wykonaj();
};

class ZadArytmetykaWskaznikowSuma : public ZadKcpp {
private:
    int suma(int* tab, int rozmiar);
public:
    void wykonaj();
};

class ZadCharExample : public ZadKcpp {
public:
    void wykonaj();
};

class ZadPrzeciazaniePotega : public ZadKcpp {
private:
    int potega(int podstawa, int wykladnik);
    double potega(double podstawa, int wykladnik);
public:
    void wykonaj();
};

class ZadKlasaKonstruktor : public ZadKcpp {
public:
    void wykonaj();
};

class ZadPrzyjazn : public ZadKcpp {
public:
    void wykonaj();
};

class ZadMetodyAbstrakcyjne : public ZadKcpp {
public:
    void wykonaj();
};

#endif
