#include <iostream>
using namespace std;

class Punkt {
public:
    double fX;
    double fY;

    Punkt(double x, double y);
    ~Punkt();
    Punkt operator+(const Punkt& p);
    void Print();
};

Punkt::Punkt(double x, double y) {
    fX = x;
    fY = y;
    cout << "obiekt utworzony" << endl;
}

Punkt::~Punkt() {
    cout << "obiekt zniszczony" << endl;
}

Punkt Punkt::operator+(const Punkt& p) {
    return Punkt(fX + p.fX, fY + p.fY);
}

void Punkt::Print() {
    cout << "x: " << fX << ", y: " << fY << endl;
}

int main() {
    Punkt p1(1.0, 2.0);
    Punkt p2(3.0, 4.0);

    Punkt p3 = p1 + p2;

    cout << "p1: "; p1.Print();
    cout << "p2: "; p2.Print();
    cout << "p1 + p2: "; p3.Print();

    return 0;
}