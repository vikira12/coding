#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

int re(const char* s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return re(s, l + 1, r - 1);
}

int p(const char* s) {
    return re(s, 0, strlen(s) - 1);
}

int main() {
    int n;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        cin >> str;
        cout << p(str.c_str()) << " " << cnt << '\n';
    }
    return 0;
}
