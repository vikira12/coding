#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

    string s;
    cin >> s;

    int n, start, end, total;
    char c;
    cin >> n;

    vector<vector<int>> sum(26, vector<int>(s.size() + 1, 0));


    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < 26; j++) sum[j][i + 1] = sum[j][i];
        sum[s[i] - 'a'][i + 1]++;
    }

    while (n--) {
        cin >> c >> start >> end;
        cout << sum[c - 'a'][end + 1] - sum[c - 'a'][start] << '\n';
    }

	return 0;
}