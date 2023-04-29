#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w,res=0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; i++) {
        res += (i * k);
    }
    (n >= res) ? cout << 0 : cout << res-n;
    return 0;
}