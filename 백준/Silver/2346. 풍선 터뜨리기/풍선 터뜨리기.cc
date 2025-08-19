#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int n, temp;
	cin >> n;
	deque<pair<int, int>> d;

	for (int i = 1; i <= n; i++) {
		cin >> temp;
		d.push_back({ i, temp });
	}

	while (!d.empty()) {
		auto cur = d.front();
		cout << cur.first << " ";
		int el = cur.second;
		d.pop_front();

		if (el > 0) {
			while (el > 1) {
				d.push_back(d.front());
				d.pop_front();
				el--;
			}
		}
		else {
			while (el < 0) {
				d.push_front(d.back());
				d.pop_back();
				el++;
			}
		}
	}

	return 0;
}