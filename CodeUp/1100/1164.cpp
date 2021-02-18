#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a > 170 && b > 170 && c > 170 ? "PASS" : "CRASH") << endl;
    return 0;
}