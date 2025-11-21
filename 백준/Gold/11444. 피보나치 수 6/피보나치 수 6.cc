#include <bits/stdc++.h>

using namespace std;

using v = vector<vector<long long>>;

v operator*(v& one, v& two) { // 객체 연산 어렵네영
    v temp(2, vector<long long>(2));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                temp[i][j] += one[i][k] * two[k][j];
            }
            temp[i][j] %= 1000000007;
        }
    }
    return temp;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin >> n;

    v a = { {1, 0}, {0, 1} };
    v b = { {1, 1}, {1, 0} };

    while (n > 0) {
        if (n % 2 == 1) {
            a = a * b;
        }
        b = b * b;
        n /= 2;
    }

    cout << a[1][0];

    return 0;
}