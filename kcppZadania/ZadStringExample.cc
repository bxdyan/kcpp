#include <iostream>
#include <string>

using namespace std;

int main() {
    string napis1 = "dzisiaj";
    string napis2("jest");
    string napis3 = "ladna";
    string napis4(10, '?');

    cout << "napis1: " << napis1 << endl;
    cout << "napis2: " << napis2 << endl;
    cout << "napis3: " << napis3 << endl;
    cout << "napis4: " << napis4 << endl;

    string s = "bardzo dlugi napis";
    string s2 = "zamiana";

    cout << "pusty: " << s.empty() << endl;
    cout << "rozmiar: " << s.size() << endl;
    cout << "znak: " << s.at(0) << endl;

    s.append("!!! ");
    cout << "append: " << s << endl;

    cout << "find: " << s.find("dlugi") << endl;

    string sub = s.substr(7, 5);
    cout << "substr: " << sub << endl;

    s.erase(0, 7);
    cout << "erase: " << s << endl;

    s.swap(s2);
    cout << "swap: s=" << s << ", s2=" << s2 << endl;

    s2.clear();
    cout << "clear: " << s2.empty() << endl;

    return 0;
}