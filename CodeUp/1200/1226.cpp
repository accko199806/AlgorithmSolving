#include <iostream>

using namespace std;

int main() {
    int lotto[6], bonus, juhee[6], count = 0;
    bool isBonus = false;

    for (int &i : lotto) cin >> i;
    cin >> bonus;
    for (int &i : juhee) cin >> i;

    for (int i : juhee) for (int j : lotto) if (i == j) count++;
    for (int i : juhee) if (i == bonus) isBonus = true;

    if (count == 6) cout << "1" << endl;
    else if (count == 5) {
        if (isBonus) cout << "2" << endl;
        else cout << "3" << endl;
    } else if (count == 4) cout << "4" << endl;
    else if (count == 3) cout << "5" << endl;
    else cout << "0" << endl;
    return 0;
}