#include <iostream>
using namespace std;

enum class Month {
    January = 1, February, March, April, May, June,
    July, August, September, October, November, December
};

int main() {

    Month m = Month::June;

    switch (m) {
        case Month::January:   cout << "January" << endl;   break;
        case Month::February:  cout << "February" << endl;  break;
        case Month::March:     cout << "March" << endl;     break;
        case Month::April:     cout << "April" << endl;     break;
        case Month::May:       cout << "May" << endl;       break;
        case Month::June:      cout << "June" << endl;      break;
        case Month::July:      cout << "July" << endl;      break;
        case Month::August:    cout << "August" << endl;    break;
        case Month::September: cout << "September" << endl; break;
        case Month::October:   cout << "October" << endl;   break;
        case Month::November:  cout << "November" << endl;  break;
        case Month::December:  cout << "December" << endl;  break;
    }

    cout << "Month number: " << static_cast<int>(m) << endl;

    return 0;
}