#include <iostream>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);

    float f;
    cin >> f;
    cout << f << endl;
    return 0;
}