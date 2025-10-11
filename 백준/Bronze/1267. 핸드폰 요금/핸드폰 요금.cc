#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

    int n, t, y = 0, m = 0;
    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> t;
        y += ((t / 30) + 1) * 10;
        m += ((t / 60) + 1) * 15;
    }

    if (y < m) cout << "Y " << y;
    else if (y > m) cout << "M " << m;
    else cout << "Y M " << y;

	return 0;
}