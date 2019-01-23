#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int SZ = 3000+10;
int a[SZ];

int main() {
    int n,i, j, fac, sum=0;
    memset(a,0,sizeof a);
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &fac);
        a[fac]++;
    }


    for(i=0; i<n; i++) {
        if(a[i]>1) {
            fac = a[i] - 1;
            a[i+1] += fac;
            a[i] = 1;
            sum += fac;
        }
    }
    if(a[i]>1) {
        fac = a[i]-1;
        sum = sum + (fac*(fac+1))/2;
    }

    printf("%d\n", sum);

return 0;
}

