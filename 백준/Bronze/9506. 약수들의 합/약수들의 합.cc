#include <bits/stdc++.h>

using namespace std;

int main() {
	while (1) {
		int num, count = 0, temp = 0;
		cin >> num;
		vector<int> n;

		if (num == -1) return 0;

		for (int i = 1; i < num; i++) {
			if (num % i == 0) {
				n.push_back(i);
				temp += i;
			}
		}

		if (temp == num) {
			cout << num << ' ' << '=' << ' ';
			for (int i = 0; i < n.size(); i++) {
				if (i != 0) cout << " + ";
				cout << n[i];
			}
			cout << '\n';
		}
		else cout << num << " is NOT perfect." << '\n';
	}
}