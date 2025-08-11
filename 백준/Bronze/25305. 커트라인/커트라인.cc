#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, p;
	cin >> n >> p;
	vector<int> arr(n);

	for (int i = 0; i < n; i++) cin >> arr[i];

	sort(arr.rbegin(), arr.rend());

	cout << arr[p - 1];

	return 0;
}