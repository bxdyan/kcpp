#include <iostream>
#include <string>

using namespace std;

class Bazowa {
private:
    int prywatnaZmienna;

protected:
    int chronionaZmienna;

public:
    int publicznaZmienna;

    void ustawDane(int p, int ch, int pub) {
        prywatnaZmienna = p;
        chronionaZmienna = ch;
        publicznaZmienna = pub;
    }

    inline void wyswietlPrywatna() const {
        cout << "zmienna private: " << prywatnaZmienna << endl;
    }

    void wyswietlWszystko() const;
    void zmienChroniona(int nowaWartosc);
};

void Bazowa::wyswietlWszystko() const {
    cout << "zmienna private: " << prywatnaZmienna << endl;
    cout << "zmienna protected: " << chronionaZmienna << endl;
    cout << "zmienna public: " << publicznaZmienna << endl;
}

inline void Bazowa::zmienChroniona(int nowaWartosc) {
    chronionaZmienna = nowaWartosc;
}

class Pochodna : public Bazowa {
public:
    void dostepDoChronionej() {
        chronionaZmienna = 999; 
    }
    
    void wyswietlChroniona() const {
        cout << "zmienna protected w klasie pochodnej: " << chronionaZmienna << endl;
    }
};

int main() {
    Bazowa obiekt;

    obiekt.publicznaZmienna = 10;
    obiekt.ustawDane(1, 2, 10);
    obiekt.wyswietlWszystko();
    obiekt.zmienChroniona(55);
    
    cout << "\npo modyfikacji metody inline:" << endl;
    obiekt.wyswietlPrywatna();

    cout << "\ntest klasy pochodnej i sekcji protected:" << endl;
    Pochodna obiektPochodny;
    obiektPochodny.dostepDoChronionej();
    obiektPochodny.wyswietlChroniona();

    return 0;
}