#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string str;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int count = 0;
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(') {
				count++;
			}
			else {
				count--;
			}

			if (count < 0) {
				cout << "NO" << '\n';
				break;
			}
		}

		if (count < 0) continue;

		if (count == 0) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}

	return 0;
}