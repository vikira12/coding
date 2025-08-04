#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, total = 0, temp, count;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		count = 0;
		for (int j = 1; j <= temp; j++) {
			if (temp % j == 0) count++;
		}
		if (count == 2) total++;
	}

	cout << total;

	return 0;
}