#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int p, n, level;
    cin >> p;

    set<int> levels;


    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> level;
        levels.insert(level);
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> level;
        levels.insert(level);
    }

    if (levels.size() == p) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
