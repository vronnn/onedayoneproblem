#include <stdio.h>
#include <algorithm>
#include <cstring>

void sieve(int m, int n)
{
    int size = n - m + 1;
    bool primes[size];
    memset(primes, true, size);

    for (int p = 2; p * p <= n; p++){
        int start = std::max(p * p, (m + p - 1) / p * p);
        for (int i = start; i <= n; i += p){
            primes[i - m] = false;
        }
    }

    if (m == 1)
        primes[0] = false;

    for (int i = m; i <= n; i++){
        if (primes[i - m]){
            printf("%d\n", i);
        }
    }
}

int main()
{
    int t, m, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &m, &n);
        sieve(m, n);
    }

    return 0;
}