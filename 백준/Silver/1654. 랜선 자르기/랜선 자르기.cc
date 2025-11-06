#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k, n, m = 0;
    cin >> k >> n;

    vector<int> v(k);

    for (int i = 0; i < k; i++) {
        cin >> v[i];
        m = max(m, v[i]);
    }

    long long int left = 1, right = m, mid, total = 0;

    while (left <= right) {
        mid = (left + right) / 2;
        long long int temp = 0;
        for (int i = 0; i < k; i++) {
            temp += v[i] / mid;
        }
        if (temp >= n) {
            left = mid + 1;
            total = max(total, mid);
        }
        else {
            right = mid - 1;
        }
    }

    cout << total;

    return 0;
}