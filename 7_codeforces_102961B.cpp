#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, cnt = 0;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);

    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < m; i++)
        cin >> b[i];
        
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    while(i < n && j < m) {
        if(abs(a[i] - b[j]) <= k) {
            cnt++;
            i++;
            j++;
        }
        else if(a[i] - b[j] > k)
            j++;
        else
            i++;
    }
    cout << cnt << "\n";
    return 0;
}
