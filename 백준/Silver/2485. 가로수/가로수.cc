#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	int n, temp, total = 0;
	cin >> n;
	vector<int> tree, tree_d;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		tree.push_back(temp);
	}

	sort(tree.begin(), tree.end());

	for (int i = 0; i < n - 1; i++) tree_d.push_back(tree[i + 1] - tree[i]);

	temp = tree_d[0];
	for (int i = 1; i < n - 1; i++) temp = gcd(temp, tree_d[i]);

	for (int i = 0; i < n - 1; i++) total += tree_d[i] / temp - 1;

	cout << total;

	return 0;
}