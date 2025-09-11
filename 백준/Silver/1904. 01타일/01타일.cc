#include <bits/stdc++.h>

using namespace std;

int n;
vector<long long> answer = { 0,1,2 };

void find_answer()
{
    long long tmp;
    for (int i = 3; i <= n; i++)
    {
        tmp = 0;
        tmp = answer[i - 1] + answer[i - 2];
        answer.push_back(tmp % 15746);
    }
}
int main() {
    cin >> n;
    find_answer();
    cout << answer[n] % 15746;
}
