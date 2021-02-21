#include <iostream>

using namespace std;

int main() {
    int year, month;
    int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> year >> month;

    if (month == 2) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) cout << day[month - 1] + 1 << endl;
        else cout << day[month - 1] << endl;
    } else cout << day[month - 1] << endl;
    return 0;
}