#include <bits/stdc++.h>

using namespace std;

int paper[64][64];

void soort(int x, int y, int size) {
    bool z = true, o = true;

    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (paper[i][j] == 0) z = false;
            if (paper[i][j] == 1) o = false;
        }
    }
    
    if (z == true) {
        cout << 1;
        return;
    }
    if (o == true) {
        cout << 0;
        return;
    }

    cout << "(";
    soort(x, y, size / 2);
    soort(x, y + size / 2, size / 2);
    soort(x + size / 2, y, size / 2);
    soort(x + size / 2, y + size / 2, size / 2);
    cout << ")";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            paper[i][j] = s[j] - '0';
        }
    }

    soort(0, 0, n);

    return 0;
}