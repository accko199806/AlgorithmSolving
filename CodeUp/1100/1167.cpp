#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        if (c > a) cout << a << endl;
        else {
            if (b > c) cout << b << endl;
            else cout << c << endl;
        }
    } else {
        if (c > a) {
            if (c > b) cout << b << endl;
            else cout << c << endl;
        } else cout << a << endl;
    }
    return 0;
}