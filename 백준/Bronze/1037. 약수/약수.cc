#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, num;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    cout << arr[n - 1] * arr[0];

    return 0;
}
