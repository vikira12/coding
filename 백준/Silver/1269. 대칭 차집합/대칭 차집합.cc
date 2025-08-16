#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<long long> arr1(n);
	vector<long long> arr2(m);
	vector<long long> result1;
	vector<long long> result2;

	for (int i = 0; i < n; i++) cin >> arr1[i];
	for (int i = 0; i < m; i++) cin >> arr2[i];

	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());

	set_difference(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), back_inserter(result1));
	set_difference(arr2.begin(), arr2.end(), arr1.begin(), arr1.end(), back_inserter(result2));

	cout << result1.size() + result2.size();

	return 0;
}