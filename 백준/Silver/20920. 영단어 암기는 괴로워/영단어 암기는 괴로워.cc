#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    string str;
    map<string, int> mp;

    cin >> n >> m;

    while (n--) {
        cin >> str;
        if (str.size() >= m) mp[str]++;
    }

    vector<pair<string, int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), [](pair<string, int> const& l, pair<string, int> const& r) {
        if (l.second != r.second) return l.second > r.second;
        else if (l.first.length() != r.first.length()) return l.first.length() > r.first.length();
        else return l.first < r.first;
    });

    for (auto& val : v) cout << val.first << '\n';

    return 0;
}
