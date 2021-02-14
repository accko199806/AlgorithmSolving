#include <iostream>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    float f;
    cin >> f;
    cout << f << endl;
    return 0;
}