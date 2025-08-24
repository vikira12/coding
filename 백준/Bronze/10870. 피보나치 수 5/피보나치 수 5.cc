#include <bits/stdc++.h>

using namespace std;

int f(int n) {
    if (n < 2) return n;
    else return f(n - 1) + f(n - 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
