#include <bits/stdc++.h>

using namespace std;

int main() {
	int num, line = 1;
	cin >> num;

	while (num - line > 0) {
		num -= line;
		line++;
	}

	if (line % 2) cout << line + 1 - num << '/' << num;
	else cout << num << '/' << line + 1 - num;

	return 0;
}