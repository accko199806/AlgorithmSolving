#include <iostream>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(11);

    double d;
    cin >> d;
    cout << d << endl;
    return 0;
}