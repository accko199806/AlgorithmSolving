#include <iostream>

using namespace std;

int main() {
    int a, b, c, div;
    cin >> a >> b >> c;

    div = a % 5;
    for (int i = a; i < 90; i++) if (i % 5 == div) b++;

    if (b > c) cout << "win" << endl;
    else if (b < c) cout << "lose" << endl;
    else cout << "same" << endl;
    return 0;
}