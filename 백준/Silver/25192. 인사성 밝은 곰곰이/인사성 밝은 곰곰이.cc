#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<string> str;
    string s;
    int n, total = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s != "ENTER") str.push_back(s);
        else {
            sort(str.begin(), str.end());
            str.resize(unique(str.begin(), str.end()) - str.begin());
            total += str.size();
            str.erase(str.begin(), str.end());
        }
    }

    sort(str.begin(), str.end());

    str.resize(unique(str.begin(), str.end()) - str.begin());

    cout << str.size() + total;

    return 0;
}
