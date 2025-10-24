#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    cin >> m;
    for (int i = 0; i < m; i++) {
        int num, start = 0, end = n - 1;
        bool f = false;
        cin >> num;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (v[mid] == num) {
                f = true;
                break;
            }
            else if (v[mid] > num) end = mid - 1;
            else start = mid + 1;
        }
        cout << (f ? 1 : 0) << '\n';
    }

    return 0;
}