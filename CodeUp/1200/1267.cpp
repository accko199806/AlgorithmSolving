#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        if (m % 5 == 0) sum += m;
    }
    cout << sum << endl;
    return 0;
}