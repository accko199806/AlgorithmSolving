#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        sum += i;
        if (sum >= n) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}