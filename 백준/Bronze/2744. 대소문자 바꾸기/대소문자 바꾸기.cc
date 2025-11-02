#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        char c;
        if (s[i] >= 65 && s[i] <= 90) c = s[i] + 32;
        if (s[i] >= 97 && s[i] <= 122) c = s[i] - 32;
        cout << c;
    }

    return 0;
}