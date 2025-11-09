#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string n, m;
    cin >> n >> m;

    if (n.length() >= m.length()) cout << "go";
    else cout << "no";

    return 0;
}