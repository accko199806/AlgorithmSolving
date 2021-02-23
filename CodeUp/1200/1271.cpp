#include <iostream>

using namespace std;

int main() {
    int n, max = -1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        if (max < temp) max = temp;
    }
    cout << max << endl;
    return 0;
}