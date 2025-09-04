#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, e;
    cin >> s >> e;

    vector<int> seq;
    for (int i = 1; seq.size() <= e; i++) {
        for (int j = 0; j < i; j++) {
            seq.push_back(i);
        }
    }

    int total = 0;
    for (int i = s - 1; i < e; i++) { 
        total += seq[i];
    }

    cout << total;
    return 0;
}