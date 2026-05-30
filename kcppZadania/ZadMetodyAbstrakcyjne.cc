#include <iostream>
#include <cmath>

using namespace std;

class Figura {
public:

    virtual ~Figura() = default;
    
    virtual void Narysuj() = 0;
    virtual double Obwod() = 0;
    virtual double Pole() = 0;
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

int main() {
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

    return 0;
}