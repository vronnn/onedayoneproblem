#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    cin >> name;
    int res = 0;
    sort(name.begin(), name.end());
    for(int i = 0; i < name.length(); i++) {
        if(name[i + 1] != name[i]) {
            res++;
        }
    }
    (res % 2 == 0) ? cout << "CHAT WITH HER!\n" : cout << "IGNORE HIM!\n";
    return 0;
}