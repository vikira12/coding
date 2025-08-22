#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, count = 0;
    cin >> n;
    map<string, bool> m;
    string str1, str2;

    while (n--) {
        cin >> str1 >> str2;
        if (str1 == "ChongChong") m.insert({ str1, true });
        else if (str2 == "ChongChong") m.insert({ str2, true });
        if (m[str1]) m[str2] = true;
        if (m[str2]) m[str1] = true;
    }

    for (auto a : m) {
        if (a.second == true) count++;
    }

    cout << count;

    return 0;
}
