#include <iostream>

using namespace std;

int main() {
    int m, sum = 0;
    cin >> m;
    for (int i = 1; i <= m; i++) if (i % 2 == 0) sum += i;
    cout << sum << endl;
    return 0;
}