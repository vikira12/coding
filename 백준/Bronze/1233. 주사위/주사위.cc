#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, check[16001] = { 0, }, max = 0, result;
    cin >> a >> b >> c;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                check[i + j + k]++;
            }
        }
    }
    for (int i = 1; i <= a + b + c; i++)
    {
        if (max < check[i])
        {
            max = check[i];
            result = i;
        }
        continue;
    }
    cout << result;
    return 0;
}