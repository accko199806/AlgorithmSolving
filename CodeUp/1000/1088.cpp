#include <iostream>

using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        if (i % 3 == 0) continue;
        else cout << i << " ";
    }
    return 0;
}