#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

    int n, f;
    cin >> n >> f;

    n = n - (n % 100);

    for (int i = 0; i < 100; i++) {
        if ((n + i) % f == 0) {
            cout << setw(2) << setfill('0') << i << '\n';
            break;
        }
    }

	return 0;
}