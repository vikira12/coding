#include <bits/stdc++.h>

using namespace std;

int visited[100001];
vector<int> v[100001];

int depth = 1;

void dfs(int x) {
    visited[x] = depth++;
    for (int i = 0; i < v[x].size(); i++) {
        int k = v[x][i];
        if (!visited[k]) dfs(k);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, r;
    cin >> n >> m >> r;

    for (int i = 0; i < m; i++) {
        int node, value;
        cin >> node >> value;
        v[node].push_back(value);
        v[value].push_back(node);
    }

    for (int i = 0; i <= n; i++) sort(v[i].rbegin(), v[i].rend());

    dfs(r);

    for (int i = 1; i <= n; i++) cout << visited[i] << '\n';

    return 0;
}