#include <bits/stdc++.h>

using namespace std;

int arr[505][505];

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) for (int j = 0; j < i + 1; j++) cin >> arr[i][j];

	for (int i = n - 1; i >= 1; i--) for (int j = 0; j < i; j++) arr[i - 1][j] += max(arr[i][j], arr[i][j + 1]);

	cout << arr[0][0];

	return 0;
}