#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

    int n, m, sum = 0, maxsum;
    cin >> n >> m;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < m; i++) sum += arr[i];

    maxsum = sum;

    for (int i = m; i < n; i++) {
        sum += arr[i] - arr[i - m];
        maxsum = max(maxsum, sum);
    }

    cout << maxsum;

	return 0;
}