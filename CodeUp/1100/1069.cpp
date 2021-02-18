#include <iostream>

using namespace std;

int main() {
    int age;
    cin >> age;

    if (age > 13) cout << 100 - age + 13 << " 1" << endl;
    else cout << 12 - age + 1 << " 3" << endl;
    return 0;
}