#include <bits/stdc++.h>

using namespace std;

int n, m, arr[8];
bool v[8];

void dfs(int num, int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = num; i <= n; i++) {
        v[i] = true;
        arr[cnt] = i;
        dfs(i, cnt + 1);
        v[i] = false;
    }
}

int main() {
    cin >> n >> m;
    dfs(1, 0);
}