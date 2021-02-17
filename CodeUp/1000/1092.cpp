#include <iostream>

using namespace std;

int main() {
    int a, b, c, i = 1;
    cin >> a >> b >> c;
    while (i % a != 0 || i % b != 0 || i % c != 0) i++;
    cout << i << endl;
    return 0;
}