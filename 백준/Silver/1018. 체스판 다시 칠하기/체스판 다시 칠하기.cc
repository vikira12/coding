#include <bits/stdc++.h>

using namespace std;

int repaint(const vector<string>& board, int x, int y) {
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char current = board[x + i][y + j];
            if ((i + j) % 2 == 0) {
                if (current != 'W') count1++;
                if (current != 'B') count2++;
            }
            else {
                if (current != 'B') count1++;
                if (current != 'W') count2++;
            }
        }
    }

    return min(count1, count2);
}

int main() {
	int w, h, min_paint = 64;;
	cin >> w >> h;
	
	vector<string> board(w);
	for (int i = 0; i < w; i++) {
		cin >> board[i];
	}

    for (int i = 0; i <= w - 8; i++) {
        for (int j = 0; j <= h - 8; j++) {
            min_paint = min(min_paint, repaint(board, i, j));
        }
    }

    cout << min_paint;

	return 0;
}