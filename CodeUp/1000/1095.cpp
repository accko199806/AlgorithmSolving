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

    int min = v[0];
    for (int i : v) if (i < min) min = i;
    cout << min << endl;
    return 0;
}