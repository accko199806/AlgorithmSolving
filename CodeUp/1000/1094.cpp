#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        v.push_back(m);
    }

    for (int i = n - 1; i >= 0; i--) cout << v[i] << " ";
    return 0;
}