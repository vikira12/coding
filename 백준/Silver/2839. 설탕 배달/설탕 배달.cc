#include <bits/stdc++.h>

using namespace std;

int arr[5000];

int main() {
	int n;
	cin >> n;
	arr[3] = arr[5] = 1;
	
	for (int i = 6; i <= n; i++) {
		if (arr[i - 3]) arr[i] = arr[i - 3] + 1;
		if (arr[i - 5]) arr[i] = arr[i] ? min(arr[i], arr[i - 5] + 1) : arr[i - 5] + 1;
	}

	cout << (arr[n] == 0 ? -1 : arr[n]);

	return 0;
}