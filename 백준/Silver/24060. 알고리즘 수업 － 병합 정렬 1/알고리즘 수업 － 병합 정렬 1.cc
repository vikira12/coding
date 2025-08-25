#include <bits/stdc++.h>

using namespace std;

int cnt, p, u, total = -1;
vector<int> a;

void merge(int l, int m, int r) {
    vector<int> temp;
    int i = l, j = m + 1;

    while (i <= m && j <= r) {
        if (a[i] <= a[j]) temp.push_back(a[i++]);
        else temp.push_back(a[j++]);
    }
    while (i <= m) temp.push_back(a[i++]);
    while (j <= r) temp.push_back(a[j++]);

    for (int k = 0; k < (int)temp.size(); k++) {
        a[l + k] = temp[k];
        cnt++;
        if (cnt == p) {
            total = a[l + k];
            return;
        }
    }
}

void merge_sort(int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        merge_sort(l, mid);
        merge_sort(mid + 1, r);
        merge(l, mid, r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> u >> p;
    a.resize(u);
    for (int i = 0; i < u; i++) cin >> a[i];

    merge_sort(0, u - 1);
    cout << total << "\n";
    return 0;
}
