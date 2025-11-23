#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, total;
    
    while (1) {
        total = 0;
        cin >> n;
        if (n == 0) break;

        while (n != 0) {
            total += n;
            n--;
        }

        cout << total << '\n';
    }

    return 0;
}