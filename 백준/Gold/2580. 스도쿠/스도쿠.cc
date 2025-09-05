#include <bits/stdc++.h>

using namespace std;

int arr[9][9], l;
vector<pair<int, int>> v;

bool e = false;

bool check(int x, int y, int value) {
	for (int i = 0; i < 9; i++) {
		if (arr[i][y] == value) return false;
		if (arr[x][i] == value) return false;
	}

	int part_x = x / 3;
	int part_y = y / 3;
	part_x *= 3;
	part_y *= 3;

	for (int i = part_x; i < part_x + 3; i++) {
		for (int j = part_y; j < part_y + 3; j++) {
			if (arr[i][j] == value) return false;
		}
	}

	return true;
}

void dfs(int cur) {
	if (e == true) return;

	if (cur == l) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << arr[i][j] << ' ';
			}
			cout << '\n';
		}
		e = true;
	}
	else {
		int nx = v[cur].first;
		int ny = v[cur].second;

		for (int i = 1; i <= 9; i++) {
			if (check(nx, ny, i)) {
				arr[nx][ny] = i;
				dfs(cur + 1);
				arr[nx][ny] = 0;
			}
		}
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				v.push_back({ i,j });
			}
		}
	}
	l = v.size();
	dfs(0);
    return 0;
}
