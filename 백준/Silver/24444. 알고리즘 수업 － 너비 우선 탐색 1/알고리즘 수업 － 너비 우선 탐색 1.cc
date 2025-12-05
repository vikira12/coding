#include <bits/stdc++.h>

using namespace std;

int visited[100001];
vector<int> v[100001];
int cnt = 1;

void bfs(int x) {
    queue<int> q;
    q.push(x);
    visited[x] = cnt++;
    while (!q.empty()) {
        int tmp = q.front();
        q.pop();
        for (int i = 0; i < v[tmp].size(); i++) {
            int g = v[tmp][i];
            if (!visited[g]) {
                q.push(g);
                visited[g] = cnt++;
            }
        }
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

    for (int i = 0; i <= n; i++) sort(v[i].begin(), v[i].end());

    bfs(r);

    for (int i = 1; i <= n; i++) cout << visited[i] << "\n";

    return 0;
}