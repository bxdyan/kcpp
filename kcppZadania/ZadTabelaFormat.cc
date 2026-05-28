#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "|" << left << setw(15) << " Nazwa" 
         << "|" << left << setw(8) << " Cena" 
         << "|" << left << setw(7) << " Ilosc" << "|" << endl;
         
    cout << "|----------------|---------|-------|" << endl;

    cout << "| " << left << setw(14) << "Chleb" 
         << "| " << right << setw(6) << fixed << setprecision(2) << 4.99 << "  "
         << "| " << right << setw(4) << 5 << "  |" << endl;

    cout << "| " << left << setw(14) << "Mleko" 
         << "| " << right << setw(6) << fixed << setprecision(2) << 3.20 << "  "
         << "| " << right << setw(4) << 10 << "  |" << endl;

    cout << "| " << left << setw(14) << "Jajka (10 szt)" 
         << "| " << right << setw(6) << fixed << setprecision(2) << 8.50 << "  "
         << "| " << right << setw(4) << 3 << "  |" << endl;

    return 0;
}