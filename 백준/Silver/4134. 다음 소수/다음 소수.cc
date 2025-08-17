#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long a) {
    if (a < 2) return false;
    if (a == 2) return true;
    if (a % 2 == 0) return false;

    long long limit = sqrt(a);
    for (long long i = 3; i <= limit; i += 2) {
        if (a % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        long long num;
        cin >> num;

        if (num <= 1) num = 2;
        while (!isPrime(num)) {
            num++;
        }
        cout << num << '\n';
    }

    return 0;
}
