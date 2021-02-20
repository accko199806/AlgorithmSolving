#include <iostream>

using namespace std;

int main() {
    int a, b, i = 1;
    bool isTrue = false;
    cin >> a >> b;

    if (a > b) {
        int temp = b;
        while (a >= temp) {
            if (a == temp) {
                cout << b << "*" << i << "=" << a << endl;
                isTrue = true;
                break;
            }
            temp += b;
            i++;
        }
    } else if (b > a) {
        int temp = a;
        while (b >= temp) {
            if (b == temp) {
                cout << a << "*" << i << "=" << b << endl;
                isTrue = true;
                break;
            }
            temp += a;
            i++;
        }
    } else {
        cout << a << "*1=" << a << endl;
        isTrue = true;
    }
    if (!isTrue) cout << "none" << endl;
    return 0;
}