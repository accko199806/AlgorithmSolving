#include <iostream>

using namespace std;

int main() {
    long w, h, b;
    cin >> w >> h >> b;
    long bit = w * h * b;
    double byte = bit / 8.0;
    double kb = byte / 1024.0;
    double mb = kb / 1024.0;
    printf("%.2f MB", mb);
    return 0;
}