#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 90) cout << "A" << endl;
    else if (n >= 70) cout << "B" << endl;
    else if (n >= 40) cout << "C" << endl;
    else cout << "D" << endl;
    return 0;
}