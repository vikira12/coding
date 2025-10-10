#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, total = 0;
	cin >> n >> m;

	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	for (int i = n - 1; i >= 0; i--) {
		if (v[i] <= m) {
			total += m / v[i];
			m %= v[i];
		}
	}

	cout << total;

	return 0;
}