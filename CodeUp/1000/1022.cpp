#include <iostream>

using namespace std;

int main() {
    char data[2001];
    fgets(data, 2000, stdin);
    cout << data << endl;
    return 0;
}