#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> arr;
map<int, int> m;

void paper(int size, int x, int y) {
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (arr[x][y] != arr[i][j]) {
                int new_size = size / 3;
                paper(new_size, x, y);
                paper(new_size, x, y + new_size);
                paper(new_size, x, y + new_size * 2);
                paper(new_size, x + new_size, y);
                paper(new_size, x + new_size, y + new_size);
                paper(new_size, x + new_size, y + new_size * 2);
                paper(new_size, x + new_size * 2, y);
                paper(new_size, x + new_size * 2, y + new_size);
                paper(new_size, x + new_size * 2, y + new_size * 2);
                return;
            }
        }
    }
    m[arr[x][y]]++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;

    arr.resize(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    paper(n, 0, 0);

    cout << m[-1] << "\n" << m[0] << "\n" << m[1];

    return 0;
}