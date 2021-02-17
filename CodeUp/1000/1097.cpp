#include <iostream>
#include <vector>

using namespace std;

int main() {
    int array[19][19] = {{0,}};
    int n, x, y;

    for (auto &i : array) for (int &j : i) cin >> j;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        for (int j = 0; j < 19; j++) array[x - 1][j] = !array[x - 1][j];
        for (int j = 0; j < 19; j++) array[j][y - 1] = !array[j][y - 1];
    }

    for (auto &i : array) {
        for (int j : i) cout << j << " ";
        cout << endl;
    }
    return 0;
}