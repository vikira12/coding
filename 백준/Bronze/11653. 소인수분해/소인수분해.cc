#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k = 2;
	cin >> n;

	while (n != 1) {
		if (n % k == 0) {
			cout << k << '\n';
			n /= k;
		}
		else k++;
	}

	return 0;
}