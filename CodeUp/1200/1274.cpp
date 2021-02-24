#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) if (n % i == 0) cnt++;
    if (cnt == 2) cout << "prime" << endl;
    else cout << "not prime" << endl;
    return 0;
}