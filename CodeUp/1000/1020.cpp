#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    for (char i : str) if (i != '-') cout << i;
    return 0;
}