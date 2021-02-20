#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    float a, b, max;
    vector<float> array;

    cin >> a >> b;
    array.push_back(a + b);
    array.push_back(a - b);
    array.push_back(a * b);
    array.push_back(a / b);
    array.push_back(b / a);
    array.push_back(pow(a, b));
    array.push_back(pow(b, a));

    max = array[0];
    for (float i : array) if (i > max) max = i;
    printf("%.6f", max);
    return 0;
}