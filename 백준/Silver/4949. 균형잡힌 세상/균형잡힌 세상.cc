#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	
	while (1) {
		getline(cin, str);
		if (str == ".") break;

		stack<char> s;
		bool b = true;

		for (char c : str) {
			if (c == '(' || c == '[') s.push(c);

			else if (c == ')') {
				if (s.empty() || s.top() != '(') {
					b = false;
					break;
				}
				s.pop();
			}

			else if (c == ']') {
				if (s.empty() || s.top() != '[') {
					b = false;
					break;
				}
				s.pop();
			}
		}

		if (!s.empty()) b = false;

		cout << (b ? "yes\n" : "no\n");
	}

	return 0;
}