#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((n >= 30 && n <= 40) || (n >= 60 && n <= 70) ? "win" : "lose") << endl;
    return 0;
}