#include <bits/stdc++.h>

using namespace std;

void hanoi(int m, int start, int to, int aux) {
    if (m == 1) {
        cout << start << " " << to << "\n";
        return;
    }

    hanoi(m - 1, start, aux, to);

    cout << start << " " << to << "\n";

    hanoi(m - 1, aux, to, start);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << (1 << n) - 1 << "\n";
    hanoi(n, 1, 3, 2);

    return 0;
}