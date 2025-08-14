#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string type, str;
	cin >> n;
	set<string> arr;

	for (int i = 0; i < n; i++) {
		cin >> str >> type;
		if (type == "enter") {
			arr.insert(str);
		}
		else {
			arr.erase(str);
		}
	}

	vector<string> total(arr.begin(), arr.end());
	sort(total.rbegin(), total.rend());

	for (int i = 0; i < total.size(); i++) cout << total[i] << '\n';

	return 0;
}