#include <iostream>

using namespace std;

int main() {
    int n, k, result;
    cin >> n >> k;
    result = n;
    if (k == 0) result = 1;
    for (int i = 1; i < k; i++) result *= n;
    cout << result << endl;
    return 0;
}