#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string str;
    cin >> n;
    str = to_string(n);

    for (int i = 0; i < 5; i++) {
        cout << "[" << str[i];
        for (int j = 0; j < 5 - i - 1; j++) cout << "0";
        cout << "]" << endl;
    }
    return 0;
}