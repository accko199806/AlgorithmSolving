#include <iostream>

using namespace std;

int main() {
    char c[31];
    scanf ("%[^\n]%*c", c);
    cout << c;
    return 0;
}