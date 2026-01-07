#include <bits/stdc++.h>

using namespace std;

int n;
int m[25][25];
int visited[25][25];
int m_x[] = { 0, 0, 1, -1 };
int m_y[] = { 1, -1, 0, 0 };

int bfs(int x, int y) {
    queue<pair<int, int>> q;
    visited[x][y] = 1;
    q.push(make_pair(x, y));
    int cnt = 1;
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int tmp_x = x + m_x[i];
            int tmp_y = y + m_y[i];

            if (tmp_x >= 0 && tmp_x < n && tmp_y >= 0 && tmp_y < n) {
                if (m[tmp_x][tmp_y] == 1 && !visited[tmp_x][tmp_y]) {
                    visited[tmp_x][tmp_y] = true;
                    q.push({ tmp_x, tmp_y });
                    cnt++;
                }
            }
        }
    }

    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            m[i][j] = s[j] - '0';
        }
    }

    vector<int> home;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (m[i][j] == 1 && !visited[i][j]) home.push_back(bfs(i, j));
        }
    }

    sort(home.begin(), home.end());

    cout << home.size() << "\n";
    for (int cnt : home) cout << cnt << "\n";

    return 0;
}