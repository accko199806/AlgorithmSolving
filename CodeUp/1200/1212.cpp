#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        int sum = b + c;
        if (a < sum) cout << "yes" << endl;
        else cout << "no" << endl;
    } else if (b >= a && b >= c) {
        int sum = a + c;
        if (b < sum) cout << "yes" << endl;
        else cout << "no" << endl;
    } else if (c >= a && c >= b) {
        int sum = a + b;
        if (c < sum) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}