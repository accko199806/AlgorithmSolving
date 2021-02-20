#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 20) cout << "비만" << endl;
    else if (n > 10) cout << "과체중" << endl;
    else cout << "정상" << endl;
    return 0;
}