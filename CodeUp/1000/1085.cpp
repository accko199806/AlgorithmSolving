#include <iostream>

using namespace std;

int main() {
    long h, b, c, s;
    cin >> h >> b >> c >> s;
    long bit = h * b * c * s;
    double byte = bit / 8.0;
    double kb = byte / 1024.0;
    double mb = kb / 1024.0;
    printf("%.1f MB", mb);
    return 0;
}