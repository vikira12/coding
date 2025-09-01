#include <bits/stdc++.h>

using namespace std;

int n, m, arr[8];

void dfs(int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        arr[cnt] = i;
        dfs(cnt + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    dfs(0);
    return 0;
}