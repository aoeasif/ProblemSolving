#include <iostream>
#include <cstdio>
using namespace std;

const int SZ = 1e5+10;
int primeDivisor[SZ];

int main() {
    int t, a, b, k, n, i, j, cnt;

    for(i=2; i<=SZ; i++) {
        if(primeDivisor[i] > 0) continue;
        primeDivisor[i] = 1;
        for(j=2; j*i<=SZ; j++) {
            primeDivisor[j*i]++;
        }
    }

    scanf("%d", &t);

    while(t--) {
        scanf("%d %d %d", &a, &b, &k);
        cnt = 0;
        for(i=a; i<=b; i++) {
            if(primeDivisor[i] == k) cnt++;
        }
        printf("%d\n",  cnt);
    }
return 0;
}
