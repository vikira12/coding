#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, max_val;

    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;

        max_val = max({a, b, c});
        if (a + b + c - max_val > max_val) {
            if (a == b && b == c) cout << "Equilateral";
            else if (a == b || b == c || a == c) cout << "Isosceles";
            else cout << "Scalene";
        }
        else cout << "Invalid";

        cout << '\n';
    }

    return 0;
}