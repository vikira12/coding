#include <bits/stdc++.h>

using namespace std;

void cantor(int m) {
    if (m == 0) {
        cout << "-";
        return;
    }

    cantor(m - 1);
    for (int i = 0; i < pow(3, m - 1); i++) {
        cout << " ";
    }
    cantor(m - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        cantor(n);
        cout << "\n";
    }

    return 0;
}