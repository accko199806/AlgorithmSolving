#include <iostream>

using namespace std;

int main() {
    float a, b, c, d, ab, cd;
    cin >> a >> b >> c >> d;
    ab = a / b;
    cd = c / d;

    if (ab > cd) cout << ">" << endl;
    else if (ab < cd) cout << "<" << endl;
    else cout << "=" << endl;
    return 0;
}