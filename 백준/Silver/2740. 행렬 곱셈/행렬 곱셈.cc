#include <bits/stdc++.h>

using namespace std;

int a[101][101], b[101][101], r[101][101];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cin >> m >> k;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int q = 0; q < m; q++) {
                r[i][j] += a[i][q] * b[q][j];
            }
            cout << r[i][j] << ' ';
        }
        cout << "\n";
    }

    return 0;
}