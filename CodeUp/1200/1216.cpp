#include <iostream>

using namespace std;

int main() {
    int a, b, c, ads;
    cin >> a >> b >> c;

    ads = b - c;
    if (a > ads) cout << "do not advertise" << endl;
    else if (a < ads) cout << "advertise" << endl;
    else cout << "does not matter" << endl;
    return 0;
}