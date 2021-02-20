#include <iostream>

using namespace std;

int main() {
    int n, units;
    cin >> n;

    units = n - ((n / 10) * 10);
    if (n / 10 != 1) {
        if (units == 1) cout << n << "st" << endl;
        else if (units == 2) cout << n << "nd" << endl;
        else if (units == 3) cout << n << "rd" << endl;
        else cout << n << "th" << endl;
    } else cout << n << "th" << endl;
    return 0;
}