#include <iostream>

using namespace std;

int main() {
    int array[10];
    bool isOutput = false;

    for (int &i : array) cin >> i;
    for (int &i :array) {
        if (i % 5 == 0) {
            cout << i << endl;
            isOutput = true;
            break;
        }
    }
    if (!isOutput) cout << 0 << endl;
    return 0;
}