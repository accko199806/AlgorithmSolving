#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> array;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        array.push_back(m);
    }
    cout << array[0] << " " << array[n / 2] << " " << array[n - 1] << endl;
    return 0;
}