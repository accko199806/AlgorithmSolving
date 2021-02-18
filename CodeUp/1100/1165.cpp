#include <iostream>

using namespace std;

int main() {
    int time, score, gap;
    cin >> time >> score;
    gap = time % 5;
    for (int i = time; i < 90; i++) if (i % 5 == gap) score++;
    cout << score << endl;
    return 0;
}