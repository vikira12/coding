#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    int n, m;
    
    while (1) {
        cin >> s >> n >> m;

        if (n == 0 && m == 0) return 0;

        if (n > 17 || m >= 80) cout << s << ' ' << "Senior" << '\n';
        else cout << s << ' ' << "Junior" << '\n';
    }
}