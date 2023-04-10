#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n, res, flag = 0;
    char d;
    string temp;
    cin >> t;
    while(t--) {
        cin >> n >> d;
        cin >> temp;
        for(int i = 0; i < n; i++) {
            if(temp[i] >= d && flag == 0) {
                cout << temp[i];
            }
            else if(temp[i] < d && flag == 0) {
                cout << d;
                for(int j = i; j < n; j++) {
                    cout << temp[j];
                }
                puts("");
                flag = 1;
            }
        }
        if(flag == 0) {
            cout << d << '\n';
        }
        flag = 0;
    }
    return 0;
}