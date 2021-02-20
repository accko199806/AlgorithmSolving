#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    n = (((n - ((n / 10) * 10)) * 10) + (n / 10)) * 2;
    if (n / 100 > 0) n -= 100;

    cout << n << endl;
    cout << (n > 50 ? "OH MY GOD" : "GOOD") << endl;
    return 0;
}