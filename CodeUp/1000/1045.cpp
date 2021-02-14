#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a + b << endl;  // 합
    cout << a - b << endl;  // 차
    cout << a * b << endl;  // 곱
    cout << a / b << endl;  // 몫
    cout << a % b << endl;  // 나머지
    printf("%.2f", float(a) / float(b));  // 나눈 값 (소수점 셋째 자리에서 반올림)
    return 0;
}