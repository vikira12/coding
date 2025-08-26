#include <bits/stdc++.h>

using namespace std;

void drow(int i, int j, int m) {
    if ((i / m) % 3 == 1 && (j / m) % 3 == 1) cout << ' ';
    else {
        if (m / 3 == 0) cout << '*';
        else drow(i, j, m / 3);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) drow(i, j, n);
        cout << '\n';
    }

    return 0;
}