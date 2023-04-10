#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, total, a, sum = 0;
    cin >> n;
    total = (n * (1 + n)) / 2;
    while(--n) {
        cin >> a;
        sum += a;
    }
    cout << total - sum;
    return 0;
}