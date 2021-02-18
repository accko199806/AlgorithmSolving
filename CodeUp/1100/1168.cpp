#include <iostream>

using namespace std;

int main() {
    int year, gender;
    cin >> year >> gender;

    int temp = year / 10000;
    if (gender == 1 || gender == 2) cout << 100 - temp + 13 << endl;
    else cout << 13 - temp << endl;
    return 0;
}