#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int SZ = 1e5+10;
int a[SZ], sa[SZ];



int main() {
    int t, n, i, key;
    scanf("%d", &t);
    while(t--) {
        memset(a, 0, SZ);
        memset(sa, 0, SZ);
        scanf("%d", &n);
        for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }

        key = -1;
        sa[n-1] = 1;
        for(i=n-2; i>=0; i--) {
            if((a[i]<0 && a[i+1] > 0) || (a[i+1] < 0 && a[i]>0)) {
                sa[i] = sa[i+1]+1;
            }else{
                sa[i] = 1;
            }
        }

        for(i=0; i<n-1; i++) {
            printf("%d ", sa[i]);
        }
        printf("1\n");



    }

return 0;
}
