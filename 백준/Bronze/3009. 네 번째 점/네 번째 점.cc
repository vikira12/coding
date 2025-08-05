#include <bits/stdc++.h>

using namespace std;

int main() {
	int x[4], y[4];
	cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];
	x[3] = (x[0] == x[1]) ? x[2] : (x[0] == x[2]) ? x[1] : x[0];
	y[3] = (y[0] == y[1]) ? y[2] : (y[0] == y[2]) ? y[1] : y[0];

	cout << x[3] << ' ' << y[3];

	return 0;
}