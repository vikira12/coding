#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, age;
	string name;
	cin >> n;
	vector<pair<int, string>> arr;

	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		arr.push_back({ age, name });
	}

	stable_sort(arr.begin(), arr.end(), [](const pair<int, string>& a, const pair<int, string>& b) {return a.first < b.first; });

	for (int i = 0; i < n; i++) cout << arr[i].first << ' ' << arr[i].second << '\n';

	return 0;
}