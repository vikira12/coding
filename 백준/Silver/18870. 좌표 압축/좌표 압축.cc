#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n), cp(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		cp[i] = arr[i];
	}

	sort(cp.begin(), cp.end());
	cp.erase(unique(cp.begin(), cp.end()), cp.end());

	for (int i = 0; i < n; i++) arr[i] = lower_bound(cp.begin(), cp.end(), arr[i]) - cp.begin();

	for (int i = 0; i < n; i++) cout << arr[i] << ' ';

	return 0;
}