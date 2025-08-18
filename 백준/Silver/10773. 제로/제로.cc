#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, num, total = 0;
	cin >> n;
	stack<int> s;

	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num == 0) s.pop();
		else s.push(num);
	}

	int size = s.size();
	for (int i = 0; i < size; i++) {
		total += s.top();
		s.pop();
	}

	cout << total;

	return 0;
}