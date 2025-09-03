#include <bits/stdc++.h>

using namespace std;

int c[15];
int n, total = 0;

bool check(int level) {
    for(int i = 0; i < level; i++) if(c[i] == c[level] || abs(c[level] - c[i]) == level - i) return false;
    return true;
}

void nqueen(int x) {
    if(x == n) total++;
    else {
        for(int i = 0; i < n; i++) {
            c[x] = i;
            if(check(x)) nqueen(x+1);
        }
    }
}
int main() {
    cin >> n;
    nqueen(0);
    cout << total;
}