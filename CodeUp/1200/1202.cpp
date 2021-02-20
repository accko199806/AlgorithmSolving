#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (90 <= n) cout << "A" << endl;
    else if (80 <= n) cout << "B" << endl;
    else if (70 <= n) cout << "C" << endl;
    else if (60 <= n)cout << "D" << endl;
    else cout << "F" << endl;
    return 0;
}