#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, a, b;
	cin >> n >> m;

	vector<int> v(n), s(n + 1, 0);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		s[i + 1] = s[i] + v[i];
	}

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		cout << s[b] - s[a - 1] << '\n';
	}
	return 0;
}