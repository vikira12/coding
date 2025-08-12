#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b) {
	if (a.length() == b.length()) return a < b;
	else return a.length() < b.length();
}

int main() {
	int n;
	cin >> n;
	vector<string> arr(n);

	for (int i = 0; i < n; i++) cin >> arr[i];

	sort(arr.begin(), arr.end(), cmp);

	cout << arr[0] << '\n';
	for (int i = 1; i < n; i++) {
		if (arr[i] != arr[i - 1]) cout << arr[i] << '\n';
	}

	return 0;
}