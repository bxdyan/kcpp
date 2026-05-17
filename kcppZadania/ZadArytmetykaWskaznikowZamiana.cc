#include <iostream>
using namespace std;

void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "przed zamiana: x = " << x << ", y = " << y << endl;
    zamien(&x, &y);
    cout << "po zamianie:   x = " << x << ", y = " << y << endl;

    return 0;
}