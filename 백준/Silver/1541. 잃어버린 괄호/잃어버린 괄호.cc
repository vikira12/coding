#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    int total = 0;
    string num;
    bool ms = false;

    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == '-' || s[i] == '+' || i == s.size()) {
            if (ms) {
                total -= stoi(num);
                num = "";
            }
            else {
                total += stoi(num);
                num = "";
            }
        }
        else {
            num += s[i];
        }
        if (s[i] == '-') {
            ms = true;
        }
    }

    cout << total;

    return 0;
}