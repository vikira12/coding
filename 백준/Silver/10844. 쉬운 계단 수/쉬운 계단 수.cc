#include <bits/stdc++.h>

using namespace std;

int dp[10][101];

int main() {
	int n, total = 0;
	cin >> n;

	for (int i = 1; i <= 9; i++) dp[i][1] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if(j == 0) dp[j][i] = dp[1][i - 1];
			else if(j == 9) dp[j][i] = dp[8][i - 1];
			else {
				dp[j][i] += dp[j - 1][i - 1];	
				dp[j][i] += dp[j + 1][i - 1];
			}
			dp[j][i] %= 1000000000;
		}
	}

	for (int i = 0; i <= 9; i++) {
		total = (total + dp[i][n]) % 1000000000;
	}

	cout << total;

	return 0;
}