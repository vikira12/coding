#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n, m;
	cin >> n;
	vector<long long> hcard(n);

	for (int i = 0; i < n; i++) cin >> hcard[i];

	cin >> m;
	vector<long long> card(m);

	for (int i = 0; i < m; i++) cin >> card[i];

	sort(hcard.begin(), hcard.end());

	for (int i = 0; i < m; i++) {
		if (lower_bound(hcard.begin(), hcard.end(), card[i]) != hcard.end() && *lower_bound(hcard.begin(), hcard.end(), card[i]) == card[i]) {
			cout << 1 << " ";
		}
		else {
			cout << 0 << " ";
		}
	}

	return 0;
}