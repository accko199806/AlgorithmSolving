#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long a, r, n;
    cin >> a >> r >> n;
    printf("%0.f", a * pow(r,(n - 1)));
    return 0;
}