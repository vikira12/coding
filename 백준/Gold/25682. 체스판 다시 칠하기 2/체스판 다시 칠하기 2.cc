#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, k, ans = 1e9;
	cin >> n >> m >> k;
	vector<string> board(n);
	for (int i = 0; i < n; i++) cin >> board[i];

	vector<vector<int>> w(n + 1, vector<int>(m + 1)), b(n + 1, vector<int>(m + 1));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int isw = ((i + j) % 2 == 0 ? 'W' : 'B'), isb = ((i + j) % 2 == 0 ? 'B' : 'W');
			w[i + 1][j + 1] = w[i][j + 1] + w[i + 1][j] - w[i][j] + (board[i][j] != isw);
			b[i + 1][j + 1] = b[i][j + 1] + b[i + 1][j] - b[i][j] + (board[i][j] != isb);
		}
	}

	for (int i = k; i <= n; i++) {
		for (int j = k; j <= m; j++) {
			int wc = w[i][j] - w[i - k][j] - w[i][j - k] + w[i - k][j - k];
			int bc = b[i][j] - b[i - k][j] - b[i][j - k] + b[i - k][j - k];
			ans = min({ ans, wc, bc });
		}
	}

	cout << ans;

	return 0;
}