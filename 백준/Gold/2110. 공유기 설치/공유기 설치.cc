#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, c;
    cin >> n >> c;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int start = 1, end = v[n - 1] - v[0], total = 0;

    while (start <= end) {
        int mid = (start + end) / 2, plant = 1, s = v[0];
        for (int i = 1; i < n; i++) {
            if (v[i] - s >= mid) {
                plant++;
                s = v[i];
            }
        }
        if (plant >= c) {
            total = max(total, mid);
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    cout << total;

    return 0;
}