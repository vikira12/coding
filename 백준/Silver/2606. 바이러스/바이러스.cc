#include <bits/stdc++.h>

using namespace std;

vector<int> v[101];
bool visited[101];
int total;

void dfs(int x) {
    for (int i = 0; i < v[x].size(); i++) {
        int tmp = v[x][i];

        if (!visited[tmp]) {
            visited[tmp] = true;
            total++;
            dfs(tmp);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; // n은 왜 주는겨..
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }
  
    visited[1] = 1;
    dfs(1);

    cout << total;

    return 0;
}