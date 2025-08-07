#include <bits/stdc++.h>

using namespace std;

vector<int> getpi(string p) {
	int s = (int)p.size(), j = 0;
	vector<int> pi(s, 0);

	for (int i = 1; i < s; i++) {
		while (j > 0 && p[i] != p[j]) j = pi[j - 1];
		if (p[i] == p[j]) pi[i] = ++j;
	}

	return pi;
}

vector<int> kmp(string t, string p) {
	vector<int> total;
	auto pi = getpi(p);
	int n = (int)t.size(), s = (int)p.size(), j = 0;

	for (int i = 0; i < n; i++) {
		while (j > 0 && t[i] != p[j]) j = pi[j - 1];
		if (t[i] == p[j]) {
			if (j == s - 1) {
				total.push_back(i - s + 1);
				j = pi[j];
			}
			else j++;
		}
	}

	return total;
}

int main() {
	string t, p;
	getline(cin, t);
	getline(cin, p);

	auto match = kmp(t, p);

	cout << (int)match.size() << '\n';

	for (auto i : match) {
		cout << i + 1 << ' ';
	}

	return 0;
}