#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, s, e;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        cin >> s >> e;
        v.push_back(make_pair(e, s));
    }
    
    sort(v.begin(), v.end());

    int t = v[0].first, count = 1;
    for (int i = 1; i < n; i++) {
        if (t <= v[i].second) {
            count++;
            t = v[i].first;
        }
    }

    cout << count;

    return 0;
}
