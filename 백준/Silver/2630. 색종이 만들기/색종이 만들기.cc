#include <bits/stdc++.h>

using namespace std;

int paper[128][128];
int white = 0, blue = 0;

void soort(int x, int y, int size) {
    int color = paper[x][y];
    bool same = true;

    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (paper[i][j] != color) {
                same = false;
                break;
            }
        }
        if (!same) break;
    }

    if (same) {
        if (color == 0) white++;
        else blue++;
    }
    else {
        int newSize = size / 2;
        soort(x, y, newSize);
        soort(x, y + newSize, newSize);
        soort(x + newSize, y, newSize);
        soort(x + newSize, y + newSize, newSize);
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> paper[i][j];
        }
    }

    soort(0, 0, n);

    cout << white << "\n" << blue << "\n";

    return 0;
}