#include <iostream>
using namespace std;

void funkcjaWhile() {
    int i = 0;
    cout << "while z i++:" << endl;
    while (i < 5) {
        if (i == 2) {
            i++;
            continue;
        }
        cout << "i: " << i++ << endl;
    }

    int j = 0;
    cout << "while z ++i:" << endl;
    while (j < 5) {
        if (j == 3) {
            break;
        }
        cout << "j: " << ++j << endl;
    }
}

void funkcjaDoWhile() {
    int i = 0;
    cout << "do-while z i++:" << endl;
    do {
        if (i == 2) {
            i++;
            continue;
        }
        cout << "i: " << i++ << endl;
    } while (i < 5);

    int j = 0;
    cout << "do-while z ++i:" << endl;
    do {
        if (j == 3) {
            break;
        }
        cout << "j: " << ++j << endl;
    } while (j < 5);
}

void funkcjaFor() {
    cout << "petla for z return:" << endl;
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            return;
        }
        cout << "i: " << i << endl;
    }
}

int main() {
    funkcjaWhile();
    funkcjaDoWhile();
    funkcjaFor();

    return 0;
}