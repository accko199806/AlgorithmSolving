#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        if (m % 2 == 0) cnt ++;
    }
    cout << cnt << endl;
    return 0;
}