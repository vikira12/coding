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


    for (int i = 0; i < n; i++) {
        total = 0;
        cin >> c >> start >> end;

        for (int j = start; j <= end; j++) if (s[j] == c) total++;

        cout << total << '\n';
    }

	return 0;
}