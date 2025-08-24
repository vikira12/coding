#include <bits/stdc++.h>

using namespace std;

long long int f(long long n) {
    if (n <= 1) return 1;
    else return n * f(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
