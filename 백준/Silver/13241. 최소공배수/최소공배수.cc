#include <bits/stdc++.h>

using namespace std;

int gcd(long long int a, long long int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	long long int a, b;
	cin >> a >> b;
	cout << (long long)a * b / gcd(a, b) << '\n';

	return 0;
}