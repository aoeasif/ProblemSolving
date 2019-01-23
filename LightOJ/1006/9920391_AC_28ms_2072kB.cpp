#include <iostream>
#include <cstdio>
using namespace std;
const int SZ = 1e4+10;
int nv[SZ];
int fn(int n) {
    if( nv[n] != 10000017) return nv[n];
    int i;
    nv[n] = 0;
    for(i = 1; i<7; i++) {
        nv[n] = (nv[n] + fn(n-i)) % 10000007;
    }
    return nv[n];
}

int main() {
    int a,b,c,d,e,f,n, caseno = 0, cases, i;
    scanf("%d", &cases);
    while( cases-- ) {
        for(i=0; i<SZ; i++) nv[i] = 10000017;
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        nv[0] = a % 10000007;
        nv[1] = b % 10000007;
        nv[2] = c % 10000007;
        nv[3] = d % 10000007;
        nv[4] = e % 10000007;
        nv[5] = f % 10000007;
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
