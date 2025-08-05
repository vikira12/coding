#include <bits/stdc++.h>

using namespace std;

struct dot {
	int max = -10001;
	int min = 10001;
};

int main() {
	dot x, y;
	int n, total;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		if (x.max < a) x.max = a;
		if (x.min > a) x.min = a;
		if (y.max < b) y.max = b;
		if (y.min > b) y.min = b;
	}

	total = (x.max - x.min) * (y.max - y.min);

	cout << total;

	return 0;
}