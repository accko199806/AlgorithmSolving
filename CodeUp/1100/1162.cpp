#include <iostream>

using namespace std;

int main() {
    int y, m, d;
    cin >> y >> m >> d;
    cout << ((y - m + d) % 10 == 0 ? "대박" : "그럭저럭") << endl;
    return 0;
}