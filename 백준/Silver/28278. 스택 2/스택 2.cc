#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, num;
	cin >> n;
	stack<int> s;
	for (int i = 0; i < n; i++) {
		cin >> m;
		switch (m) {
		case 1:
			cin >> num;
			s.push(num);
			break;
		case 2:
			if (!s.empty()) {
				cout << s.top() << "\n";
				s.pop();
			}
			else cout << "-1\n";
			break;
		case 3:
			cout << s.size() << "\n";
			break;
		case 4:
			if (s.empty()) cout << "1\n";
			else cout << "0\n";
			break;
		case 5:
			if (!s.empty()) cout << s.top() << "\n";
			else cout << "-1\n";
			break;
		}
	}
	return 0;
}