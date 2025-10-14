#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int prize = 0;
        if (a == b && b == c) {
            prize = 10000 + a * 1000;
        }
        else if (a == b || a == c) {
            prize = 1000 + a * 100;
        }
        else if (b == c) {
            prize = 1000 + b * 100;
        }
        else {
            int mx = max({ a, b, c });
            prize = mx * 100;
        }

        m = max(m, prize);
    }

    cout << m;

    return 0;
}