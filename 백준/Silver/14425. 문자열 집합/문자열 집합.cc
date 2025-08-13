#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, total = 0;
	string str;
	set<string> s;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> str;
		s.insert(str);
	}

	for (int i = 0; i < m; i++) {
		cin >> str;
		if (s.find(str) != s.end()) {
			total++;
		}
	}

	cout << total;

	return 0;
}