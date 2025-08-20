#include <bits/stdc++.h>

using namespace std;

vector<int> blue;
vector<int> red;

int find_r(int x) {
    if (x == red[x]) return x;
    else return red[x] = find_r(red[x]);
}

int find_b(int x) {
    if (x == blue[x]) return x;
    else return blue[x] = find_b(blue [x]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    while (n != 0) {
        red.clear();
        blue.clear();
        red.resize(n + 1);
        blue.resize(n + 1);

        for (int i = 1; i <= n; i++) {
            red[i] = i;
            blue[i] = i;
        }
        int countr = 0, countb = 0;

        while (m--) {
            char c;
            int f, t;
            cin >> c >> f >> t;

            if (c == 'R') {
                f = find_r(f), t = find_r(t);
                if (f == t) continue;
                countr++;
                red[t] = f;
            }
            else {
                f = find_b(f), t = find_b(t);
                if (f == t) continue;
                countb++;
                blue[t] = f;
            }
        }
        if (n - 1 - countr <= k && k <= countb) cout << 1 << '\n';
        else cout << 0 << '\n';

        cin >> n >> m >> k;
    }
    return 0;
}
