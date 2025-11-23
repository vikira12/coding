#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    while (1) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        cout << n + m << '\n';
    }

    return 0;
}