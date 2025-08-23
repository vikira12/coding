#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    double sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    cout << (int)round(sum / n) << '\n' << v[n / 2] << '\n';

    map<int, int> freq;
    for (int x : v) freq[x]++;

    int maxFreq = 0;
    for (auto& [num, count] : freq) maxFreq = max(maxFreq, count);

    vector<int> modes;
    for (auto& [num, count] : freq) {
        if (count == maxFreq) modes.push_back(num);
    }

    sort(modes.begin(), modes.end());
    if (modes.size() > 1) cout << modes[1] << '\n';
    else cout << modes[0] << '\n';

    cout << v.back() - v.front() << '\n';

    return 0;
}
