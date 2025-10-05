#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	long long total = 0, num;
	cin >> n >> m;

	vector<long long> v(n + 1, 0);
	vector<long long> c(m, 0);

	for (int i = 1; i <= n; i++) {
		cin >> num;
		v[i] = (v[i - 1] + num) % m;
		c[v[i]]++;
	}

	total += c[0];

	for (int i = 0; i < m; i++) if (c[i] > 1) total += (c[i] * (c[i] - 1)) / 2;

	cout << total;

	return 0;
}