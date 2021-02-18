#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n >= 50 && n <= 70) || (n % 6 == 0) ? "win" : "lose") << endl;
    return 0;
}