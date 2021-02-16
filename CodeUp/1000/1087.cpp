#include <iostream>

using namespace std;

int main() {
    int m, i = 1, sum = 0;
    cin >> m;
    while (true) {
        sum += i;
        if (sum >= m) break;
        i++;
    }
    cout << sum << endl;
    return 0;
}