#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        a %= 10;

        if (a == 0) {
            cout << 10 << "\n";
        } 
        else {
            int exp = (b % 4 == 0 ? 4 : b % 4);
            int result = 1;
            for (int i = 0; i < exp; i++) {
                result = (result * a) % 10;
            }
            cout << result << "\n";
        }
    }
    return 0;
}