#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n * 2; i += 2) {
		for (int j = 0; j < i; j += 2) {
			cout << ' ';
		}
		for (int j = 0; j < n * 2 - i - 1; j++) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}
