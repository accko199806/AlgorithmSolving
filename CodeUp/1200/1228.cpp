#include <iostream>

using namespace std;

int main() {
    double height, weight, standard, obesity;
    cin >> height >> weight;

    standard = (height - 100) * 0.9;
    obesity = (weight - standard) * 100 / standard;

    if (obesity <= 10) cout << "정상" << endl;
    else if (obesity <= 20) cout << "과체중" << endl;
    else cout << "비만" << endl;
    return 0;
}