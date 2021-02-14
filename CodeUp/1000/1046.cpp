#include <iostream>

using namespace std;

int main() {
    int a, b, c, sum;
    cin >> a >> b >> c;

    sum = a + b + c;
    cout << sum << endl;
    printf("%.1f", (sum / 3.0));
    return 0;
}