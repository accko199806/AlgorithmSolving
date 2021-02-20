#include <iostream>

using namespace std;

int main() {
    int grade, clas, number;
    cin >> grade >> clas >> number;
    cout << grade << (clas > 10 ? "" : "0") << clas << (number > 100 ? "" : (number > 10 ? "0" : "00")) << number << endl;
    return 0;
}