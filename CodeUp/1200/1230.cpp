#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    bool isOutput = false;
    cin >> a >> b >> c;

    if (a <= 170) {
        cout << "CRASH " << a << endl;
        isOutput = true;
    }
    if (b <= 170 && !isOutput) {
        cout << "CRASH " << b << endl;
        isOutput = true;
    }
    if (c <= 170 && !isOutput) {
        cout << "CRASH " << c << endl;
        isOutput = true;
    }
    if (!isOutput) cout << "PASS" << endl;
    return 0;
}