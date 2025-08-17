#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, count = 0;
    cin >> t;
    vector<bool> p(1000000 + 1, true);
    p[0] = p[1] = false;

    for (int i = 2; i * i <= 1000000; i++) {
        if (p[i]) {
            for (int j = i * i; j <= 1000000; j += i) {
                p[j] = false;
            }
        }
    }

    while (t--) {
        cin >> n;
        count = 0;
        for (int i = 2; i <= n / 2; i++) if (p[i] && p[n - i])count++;
        cout << count << '\n';
    }

	return 0;
}