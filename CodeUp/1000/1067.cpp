#include <iostream>

using namespace std;

int main() {
    long l;
    cin >> l;
    if (l > 0) cout << "plus" << endl;
    else cout << "minus" << endl;
    if (l % 2 == 0) cout << "even" << endl;
    else cout << "odd" << endl;
    return 0;
}