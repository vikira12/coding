#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, num, count = 1;
	cin >> n;

	stack<int> s;

	while (n--) {
		cin >> num;

		if (num == count) count++;
		else s.push(num);

		while (!s.empty() && s.top() == count) {
			s.pop();
			count++;
		}
	}

	if (s.empty()) cout << "Nice";
	else cout << "Sad";

	return 0;
}