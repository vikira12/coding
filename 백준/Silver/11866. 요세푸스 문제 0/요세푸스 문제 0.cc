#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    queue<int> q;

    for (int i = 0; i < n; i++) q.push(i + 1);

    cout << "<";
    while (!q.empty()) {
        for (int j = 1; j < k; j++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();
        if (!q.empty()) cout << ", ";
    }
    cout << ">";

    return 0;
}
