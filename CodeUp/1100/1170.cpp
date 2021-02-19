#include <iostream>

using namespace std;

int main() {
    int grade, clas, number;
    cin >> grade >> clas >> number;
    cout << grade << clas << (number > 10 ? "" : "0") << number << endl;
    return 0;
}