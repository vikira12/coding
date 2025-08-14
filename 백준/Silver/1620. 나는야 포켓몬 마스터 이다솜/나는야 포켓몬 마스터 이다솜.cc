#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, num;
	string str;
	cin >> n >> m;
	vector<string> arr(n);
	map<string, int> mp;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		mp[arr[i]] = i + 1;
	}

	for (int i = 0; i < m; i++) {
		cin >> str;
		if (isdigit(str[0]) != 0) {
			num = stoi(str) - 1;
			cout << arr[num] << '\n';
		}
		else {
			cout << mp[str] << '\n';
		}
	}

	return 0;
}