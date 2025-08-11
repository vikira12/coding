#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    static int cnt[10001] = {0};

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (cnt[i]--) {
            cout << i << '\n';
        }
    }

    return 0;
}
