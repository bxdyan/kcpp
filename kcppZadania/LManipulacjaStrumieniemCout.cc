#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.141592653589793;

    cout << "==================================================" << endl;
    
    cout << "wynika naszego dzialania: " << fixed << setprecision(5) << pi << " jest niepoprawny ale:" << endl;
    
    cout << setfill(' ');
    cout << setw(12) << "output: " << setw(8) << setprecision(3) << pi 
         << setw(5) << "t: " << setw(7) << setprecision(3) << pi << endl;
         
    cout << setw(13) << "output1: " << setw(8) << setprecision(4) << pi 
         << setw(4) << "t: " << setw(9) << setprecision(5) << pi << endl;
         
    cout << setw(13) << "output2: " << setw(8) << setprecision(4) << pi 
         << setw(4) << "t: " << setw(10) << setprecision(6) << pi << endl;
         
    cout << setw(5) << "" << setfill('-') << setw(33) << "" << endl;
    
    cout << setfill(' ');
    cout << setw(13) << "average: " << setw(8) << setprecision(4) << pi 
         << setw(4) << "t: " << setw(10) << setprecision(6) << pi << endl;
         
    cout << "==================================================" << endl;

    return 0;
}