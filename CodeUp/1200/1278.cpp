#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    for (long i = 1; i < LONG_MAX; i = i * 10) {
        if (n / i == 0) break;
        else cnt++;
    }
    cout << cnt << endl;
    return 0;
}