#include <iostream>

using namespace std;

int main() {
    char c;
    int a, b;
    scanf("%d%c%d", &a, &c, &b);

    switch (c) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            printf("%.2f", float(a) / float(b));
            break;
    }
    return 0;
}