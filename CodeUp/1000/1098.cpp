#include <iostream>

using namespace std;

int main() {
    int h, w, n, l, d, x, y;
    int array[101][101] = {{0,}};

    cin >> h >> w;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l >> d >> x >> y;
        for (int length = 0; length < l; length++) {
            if (d == 0) array[x - 1][y - 1 + length] = 1;
            else array[x - 1 + length][y - 1] = 1;
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) cout << array[i][j] << " ";
        cout << endl;
    }
    return 0;
}