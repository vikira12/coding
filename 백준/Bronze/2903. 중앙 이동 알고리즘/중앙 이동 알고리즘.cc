#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, dot = 2;
	cin >> n;

	for (int i = 1; i <= n; i++) dot = dot * 2 - 1;

	cout << dot * dot;

	return 0;
}