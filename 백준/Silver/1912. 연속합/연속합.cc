#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, a[100001], d[100001], ans = -1000;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> a[i];

	for(int i = 0; i < n; ++i){
		d[i] = max(a[i], d[i-1] + a[i]);
		ans = max(ans, d[i]);
	}

	cout << ans;
	return 0;
}
