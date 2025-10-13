#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, total = 0;
    cin >> n;

    vector<int> v(n), s(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        s[i] = total + v[i];
        total += v[i];
    }

    total = 0;

    for (int i = 0; i < n; i++) total += s[i];

    cout << total;

    return 0;
}