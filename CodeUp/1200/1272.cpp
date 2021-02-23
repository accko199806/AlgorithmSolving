#include <iostream>

using namespace std;

int getPrice(int idx);

int main() {
    int k, h;
    cin >> k >> h;
    cout << getPrice(k) + getPrice(h) << endl;
    return 0;
}

int getPrice(int idx) {
    if (idx % 2 == 0) return idx / 2 * 10;
    else return (idx + 1) / 2;
}