#include <iostream>

using namespace std;

class GFG;

class Geeks {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    Geeks() {
        private_variable = 10;
        protected_variable = 99;
    }

    // tak, przyjazn moze byc obustronna (mutual) jesli zadeklarujemy ja recznie w obu klasach
    friend class GFG;

    void displayGFG(GFG& g);
};

class GFG {
private:
    int gfg_private;

public:
    GFG() {
        gfg_private = 500;
    }

    // deklaracja przyjazni w druga strone
    friend class Geeks;

    void displayGeeks(Geeks& t) {
        cout << "wartosc zmiennej prywatnej = " << t.private_variable << endl;
        cout << "wartosc zmiennej chronionej = " << t.protected_variable << endl;
    }
};

void Geeks::displayGFG(GFG& g) {
    cout << "wartosc prywatnej zmiennej gfg = " << g.gfg_private << endl;
}

int main() {
    Geeks g;
    GFG fri;

    fri.displayGeeks(g);
    g.displayGFG(fri);

    return 0;
}