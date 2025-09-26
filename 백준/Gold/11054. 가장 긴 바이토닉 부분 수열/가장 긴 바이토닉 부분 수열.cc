#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, p, m, dpm[1001], dpp[1001], total = 0;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) cin >> v[i];

	for (int i = 0; i < n; i++) {
		dpp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (v[i] > v[j]) {
				dpp[i] = max(dpp[i], dpp[j] + 1);
			}
		}
	}

	for (int i = n - 1; i >= 0; i--) {
		dpm[i] = 1;
		for (int j = n - 1; j > i; j--) {
			if (v[i] > v[j]) {
				dpm[i] = max(dpm[i], dpm[j] + 1);
			}
		}
	}

	for (int i = 0; i < n; i++) total = max(total, dpp[i] + dpm[i] - 1);

	cout << total;

	return 0;
}