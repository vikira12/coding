#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int m, q = 0, d = 0, ni = 0, p = 0;
		cin >> m;

		while (m > 0) {
			if (m >= 25) {
				q++;
				m -= 25;
			}
			else if (m >= 10) {
				d++;
				m -= 10;
			}
			else if (m >= 5) {
				ni++;
				m -= 5;
			}
			else {
				p++;
				m--;
			}
		}

		cout << q << ' ' << d << ' ' << ni << ' ' << p << '\n';
	}

	return 0;
}