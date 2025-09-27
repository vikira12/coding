#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> line(n);
	vector<int> v, lis;

	for (int i = 0; i < n; i++) cin >> line[i].first >> line[i].second;

	sort(line.begin(), line.end());

	for (int i = 0; i < n; i++) v.push_back(line[i].second);

	for (int i = 0; i < n; i++) {
		auto it = lower_bound(lis.begin(), lis.end(), v[i]);
		if (it == lis.end()) {
			lis.push_back(v[i]);
		}
		else {
			*it = v[i];
		}
	}

	cout << n - lis.size();

	return 0;
}