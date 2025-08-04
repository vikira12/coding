#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, total = 0, i;
	cin >> a >> b;

	for (i= 1; i <= a; i++) {
		if (a % i == 0) {
			total++;
			if (total == b) {
				cout << i;
				return 0;
			}
		}
	}

	cout << 0;

	return 0;
}