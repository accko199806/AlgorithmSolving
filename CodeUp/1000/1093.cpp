#include <iostream>

using namespace std;

int main() {
    int n;
    int count[23] = {0,};

    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        count[m - 1] += 1;
    }

    for (int i :count)cout << i << " ";
    return 0;
}