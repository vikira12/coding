#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, total = 0, count, min = -1;
	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		count = 0;

		for (int j = 1; j <= i; j++) if (i % j == 0) count++;

		if (count == 2) {
			if (min == -1) min = i;
			total += i;
		}
	}

	if (min == -1) cout << -1;
	else cout << total << '\n' << min;

	return 0;
}