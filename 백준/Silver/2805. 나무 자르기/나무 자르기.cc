#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    vector<int> v;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    int start = 0, end = *max_element(v.begin(), v.end()), total = 0;

    while (start <= end) {
        long long temp = 0;
        int mid = (start + end) / 2;
        for (int i = 0; i < n; i++) {
            if (v[i] > mid) temp += v[i] - mid;
        }
        if (temp < m) end = mid - 1;
        else {
            total = mid;
            start = mid + 1;
        }
    }

    cout << total;

    return 0;
}