#include <iostream>

using namespace std;

int main() {
    int hour, minute;
    cin >> hour >> minute;

    minute -= 30;
    if (minute < 0) {
        hour -= 1;
        if (hour < 0) hour = 23;
        minute += 60;
    }

    cout << hour << " " << minute << endl;
    return 0;
}