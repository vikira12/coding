#include <bits/stdc++.h>

using namespace std;

int main() {
	int sum = 0;
	vector<int> arr(5);

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	sort(begin(arr), end(arr));

	cout << sum / 5 << '\n' << arr[2];

	return 0;
}