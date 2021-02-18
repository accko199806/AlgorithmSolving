#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (a % 2 == 0 ? "짝수" : "홀수") << "+" << (b % 2 == 0 ? "짝수" : "홀수") << "=" << ((a + b) % 2 == 0 ? "짝수" : "홀수");
    return 0;
}