#include <bits/stdc++.h>

using namespace std;

int main() {
	int min, max;
	cin >> min >> max;
    vector<bool> p(max + 1, true);
    p[0] = p[1] = false;

    for (int i = 2; i * i <= max; i++) {
        if (p[i]) {
            for (int j = i * i; j <= max; j += i) {
                p[j] = false;
            }
        }
    }

	for (int i = min; i <= max; i++) if (p[i]) cout << i << '\n';

	return 0;
}