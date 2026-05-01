#include <iostream>
#include <string>

using namespace std;

class MyCar {
public:
    string fModel;
    string fPlate;
    int fYear;

    MyCar();
    ~MyCar();
    void Print();
};

MyCar::MyCar() {
    fModel = "Ford";
    fPlate = "SK 88221";
    fYear = 2015;
    cout << "Object created" << endl;
}

MyCar::~MyCar() {
    cout << "Object destroyed" << endl;
}

void MyCar::Print() {
    cout << "Model: " << fModel << endl;
    cout << "Plate: " << fPlate << endl;
    cout << "Year:  " << fYear << endl;
}

int main() {
    MyCar c;
    c.Print();
    return 0;
}