#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;

    while (cin >> n >> m) {
        cout << m / (n + 1) << '\n';
    }

    return 0;
}