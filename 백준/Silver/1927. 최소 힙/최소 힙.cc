#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<>> q;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num == 0) {
            if (q.size() == 0) v.push_back(0);
            else {  
                v.push_back(q.top());
                q.pop();
            }
        }
        else q.push(num);
    }

    for (int i = 0; i < v.size(); i++) cout << v[i] << '\n';

    return 0;
}