#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, size;
    cin >> a >> b >> c >> d;
    size = a + b + c + d;

    if (size == 0) cout << "모" << endl;
    if (size == 1) cout << "도" << endl;
    if (size == 2)cout << "개" << endl;
    if (size == 3)cout << "걸" << endl;
    if (size == 4)cout << "윷" << endl;
    return 0;
}