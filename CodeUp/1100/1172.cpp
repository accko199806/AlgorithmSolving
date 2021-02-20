#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b, c;
    vector<int> array;

    cin >> a >> b >> c;
    array.push_back(a);
    for (int i = 0; i < array.size(); i++) {
        if (array[i] >= b) {
            array.insert(array.begin() + i, b);
            break;
        }
        if (i == array.size() - 1) {
            array.push_back(b);
            break;
        }
    }
    for (int i = 0; i < array.size(); i++) {
        if (array[i] >= c) {
            array.insert(array.begin() + i, c);
            break;
        }
        if (i == array.size() - 1) {
            array.push_back(c);
            break;
        }
    }

    for (int i : array) cout << i << " ";
    return 0;
}