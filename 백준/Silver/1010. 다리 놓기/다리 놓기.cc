#include <bits/stdc++.h>

using namespace std;

long long comb(int n, int r) {
    long long result = 1;
    for (int i = 1; i <= r; i++) {
        result = result * (n - i + 1) / i;
    }
    return result;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << comb(m, n) << "\n";
    }
    return 0;
}
