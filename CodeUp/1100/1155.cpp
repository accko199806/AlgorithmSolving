#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n % 7 == 0 ? "multiple" : "not multiple") << endl;
    return 0;
}