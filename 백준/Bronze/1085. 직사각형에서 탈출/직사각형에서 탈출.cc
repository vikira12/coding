#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, y, w, h, min;
	cin >> x >> y >> w >> h;

	min = (x < y) ? x : y;
	min = (min < w - x) ? min : w - x;
	min = (min < h - y) ? min : h - y;

	cout << min;

	return 0;
}