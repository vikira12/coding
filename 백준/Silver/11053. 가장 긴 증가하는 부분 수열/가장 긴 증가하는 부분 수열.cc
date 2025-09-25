#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, p, m, dp[1001], total = 0;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		cin >> p;
		v.push_back(p);
		m = 0;
		for (int j = 0; j < v.size(); j++) {
			if (v[i] > v[j]) {
				if (m < dp[j]) m = dp[j];
			}
		}
		dp[i] = m + 1;
		total = max(total, dp[i]);
	}

	cout << total;

	return 0;
}