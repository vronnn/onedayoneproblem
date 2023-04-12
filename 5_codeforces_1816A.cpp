#include <bits/stdc++.h>
using namespace std;

void solve (int a, int b) {
    cout << 2 << '\n' << a-1 << ' ' << 1 << '\n' << a << ' ' << b;
}

int main() {
    int t, a, b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        solve(a,b);
        puts("");
    }
    return 0;
}