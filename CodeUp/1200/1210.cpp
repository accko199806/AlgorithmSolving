#include <iostream>

using namespace std;

int main() {
    int a, b, size;
    int kind[5] = {400, 340, 170, 100, 70};

    cin >> a >> b;
    size = kind[a - 1] + kind[b - 1];
    cout << (size > 500 ? "angry" : "no angry") << endl;
    return 0;
}