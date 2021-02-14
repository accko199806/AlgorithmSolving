#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b, c;
    vector<int> v;
    cin >> a >> b >> c;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    for (int i :v) {
        if (i % 2 == 0) cout << "even" << endl;
        else cout << "odd" << endl;
    }
    return 0;
}