#include <bits/stdc++.h>

using namespace std;

int n;
int num[11];
int op[4];
int mmin = 1000000001;
int mmax = -1000000001;

void dfs(int result, int idx) {
    if (idx == n) {
        mmax = max(mmax, result);
        mmin = min(mmin, result);
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (op[i] > 0) {
            op[i]--;
            if (i == 0) dfs(result + num[idx], idx + 1);
            else if (i == 1) dfs(result - num[idx], idx + 1);
            else if (i == 2) dfs(result * num[idx], idx + 1);
            else dfs(result / num[idx], idx + 1);
            op[i]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> num[i];
    for (int i = 0; i < 4; i++) cin >> op[i];

    dfs(num[0], 1);

    cout << mmax << '\n' << mmin;
}