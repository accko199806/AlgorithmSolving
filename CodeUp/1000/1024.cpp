#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;
    for (char i : word) cout << "\'" << i << "\'" << endl;
    return 0;
}