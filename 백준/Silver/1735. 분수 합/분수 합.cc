#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	a = a * y + x * b;
	b *= y;
	x = a / gcd(a, b);
	y = b / gcd(a, b);
	cout << x << ' ' << y;

	return 0;
}