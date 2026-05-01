#include <iostream>
using namespace std;

enum class Miesiac {
    Styczen = 1, Luty, Marzec, Kwiecien, Maj, Czerwiec,
    Lipiec, Sierpien, Wrzesien, Pazdziernik, Listopad, Grudzien
};

int main() {

    Miesiac m = Miesiac::Czerwiec;

    switch (m) {
        case Miesiac::Styczen:     cout << "styczen" << endl;     break;
        case Miesiac::Luty:        cout << "luty" << endl;        break;
        case Miesiac::Marzec:      cout << "marzec" << endl;      break;
        case Miesiac::Kwiecien:    cout << "kwiecien" << endl;    break;
        case Miesiac::Maj:         cout << "maj" << endl;         break;
        case Miesiac::Czerwiec:    cout << "czerwiec" << endl;    break;
        case Miesiac::Lipiec:      cout << "lipiec" << endl;      break;
        case Miesiac::Sierpien:    cout << "sierpien" << endl;    break;
        case Miesiac::Wrzesien:    cout << "wrzesien" << endl;    break;
        case Miesiac::Pazdziernik: cout << "pazdziernik" << endl; break;
        case Miesiac::Listopad:    cout << "listopad" << endl;    break;
        case Miesiac::Grudzien:    cout << "grudzien" << endl;    break;
    }

    cout << "numer miesiaca: " << static_cast<int>(m) << endl;

    return 0;
}