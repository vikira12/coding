#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

    map<string, int> color = {
        {"black", 0}, {"brown", 1}, {"red", 2}, {"orange", 3}, {"yellow", 4}, {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8}, {"white", 9}
    };

    string a, b, c;
    cin >> a >> b >> c;

    long long total = (color[a] * 10 + color[b]) * pow(10, color[c]);

    cout << total;

	return 0;
}