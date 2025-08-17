#include <bits/stdc++.h>

using namespace std;

int main() {
    int l = 246912, n;
    vector<bool> p(l + 1, true);
    p[0] = p[1] = false;
    vector<int> ps(l + 1, 0);
    for (long long i = 2; i * i <= l; ++i) {
        if (p[i]) {
            for (long long x = i * i; x <= l; x += i)
                p[x] = false;
        }
    }
    for (int i = 1; i <= l; ++i) ps[i] = ps[i - 1] + (p[i] ? 1 : 0);

    while (cin >> n && n != 0) cout << (ps[2 * n] - ps[n]) << '\n';

	return 0;
}