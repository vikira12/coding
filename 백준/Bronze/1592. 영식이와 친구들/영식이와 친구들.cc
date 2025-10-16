#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, l, i = 1, total = 0;
    cin >> n >> m >> l;

    vector<int> v(n + 1, 0);
    v[i] = 1;

    while (v[i] < m) {
        if (v[i] % 2 == 0) i -= l;
        else i += l;

        if (i > n) i -= n;
        else if (i < 1) i += n;

        v[i]++;
        total++;
    }

    cout << total;
    return 0;
}
