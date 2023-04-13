#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,a;
    string s;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0 ; i < n; i++) {
            cin >> a;
        }
        cout << 3 * (10 - n) * (9 - n) << '\n';
    }
    return 0;
}