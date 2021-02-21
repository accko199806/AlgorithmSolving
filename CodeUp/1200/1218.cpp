#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b > c) {
        if (a == b && a == c) cout << "정삼각형" << endl;
        else if (a == b || b == c || a == c) cout << "이등변삼각형" << endl;
        else if (((a * a) + (b * b)) == c * c) cout << "직각삼각형" << endl;
        else cout << "삼각형" << endl;
    } else cout << "삼각형아님" << endl;
    return 0;
}