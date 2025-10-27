#include <bits/stdc++.h>

using namespace std;

long long oil[100000], road[100000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long city, min, total;

    cin >> city;

    for (int i = 0; i < city - 1; i++) cin >> road[i];

    for (int i = 0; i < city; i++) cin >> oil[i];

    min = oil[0];
    total = min * road[0];

    for (int i = 0; i < city; i++) {
        if (min >= oil[i + 1]) min = oil[i + 1];
        total += min * road[i + 1];
    }

    cout << total;

    return 0;
}
