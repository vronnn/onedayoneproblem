#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int rev = 0;
    while(x) {
        rev *= 10;
        rev += x % 10;
        x /= 10;
    }
    return rev;
}

int main () {
    long long n, a, b, res;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        res = reverse(reverse(a) + reverse(b));
        cout << res << '\n';
    }
    return 0;
}