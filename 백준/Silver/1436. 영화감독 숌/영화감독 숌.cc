#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t, total = 0;
	string check;

	cin >> n;

	for (t = 666; ; t++) {
		check = to_string(t);

		if (check.find("666") != -1) {
			total++;

			if (total == n) {
				cout << t;
				break;
			}
		}
	}

	return 0;
}