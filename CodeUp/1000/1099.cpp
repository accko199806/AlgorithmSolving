#include <iostream>

using namespace std;

int main() {
    int array[10][10] = {{0,}};
    for (auto &i : array) for (int &j : i) cin >> j;

    int x = 1, y = 1;
    while (true) {
        if (array[x][y] == 2) {
            array[x][y] = 9;
            break;
        } else {
            array[x][y] = 9;
            if (array[x][y + 1] == 0 || array[x][y + 1] == 2) y += 1;
            else if (array[x + 1][y] == 0 || array[x + 1][y] == 2) x += 1;
            else break;
        }
    }

    for (auto &i : array) {
        for (int j : i) cout << j << " ";
        cout << endl;
    }
    return 0;
}