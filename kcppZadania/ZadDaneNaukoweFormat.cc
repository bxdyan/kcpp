#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.141592;
    double e = 2.718281;
    double phi = 1.618033;

    cout << left << setw(15) << "Stała" 
         << " Wartość (domyślnie)    Notacja stała      Notacja naukowa" << endl;
    cout << "--------       -----------------     -------------      --------------" << endl;

    cout << left << setw(15) << "Pi";
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

    return 0;
}