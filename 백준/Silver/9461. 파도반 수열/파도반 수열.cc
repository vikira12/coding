#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;

    vector<long long> v(101, 0);
    v[1] = v[2] = v[3] = 1;
    v[4] = v[5] = 2;

    for (int i = 6; i <= 100; i++) {
        v[i] = v[i - 1] + v[i - 5];
    }

    while (t--) {
        cin >> n;
        cout << v[n] << "\n";
    }

    return 0;
}