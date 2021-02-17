#include <iostream>
#include <vector>

using namespace std;

int main() {
    int array[19][19] = {{0,}};
    int n, x, y;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        array[x - 1][y - 1] = 1;
    }

    for (auto &i : array) {
        for (int j : i) cout << j << " ";
        cout << endl;
    }
    return 0;
}