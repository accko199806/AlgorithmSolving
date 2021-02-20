#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n > 0 ? "양수" : (n < 0 ? "음수" : "0")) << endl;
    return 0;
}