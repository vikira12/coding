#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, temp = 1, i = 1;
	cin >> n;

	while (1) {
		if (n <= temp) {
			cout << i;
			break;
		}
		temp += 6 * i;
		i++;
	}

	return 0;
}