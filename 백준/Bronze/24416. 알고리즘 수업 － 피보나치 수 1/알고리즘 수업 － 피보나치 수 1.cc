#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
    if (n == 1 || n == 2) return 1;
    else return (fib(n - 1) + fib(n - 2));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << fib(n) << ' ' << n - 2;

    return 0;
}