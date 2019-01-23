#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

const int SZ = 5;
int ip_dec[SZ], ip_bin[SZ];

int bin_to_dec(int i) {
    int num = 0, n, mul = 0, temp;
    temp = ip_bin[i];
    while(temp != 0) {
        n = temp % 10;
        num = num + (n*pow(2,mul++));
        temp /= 10;
    }
    return num;
}

int main() {
    int i, j, t, bin, dec, m;

    scanf("%d", &t);
    for(j=1; j<=t; j++) {
        m = 0;
        scanf("%d.%d.%d.%d", &ip_dec[0], &ip_dec[1], &ip_dec[2], &ip_dec[3]);
        scanf("%d.%d.%d.%d", &ip_bin[0], &ip_bin[1], &ip_bin[2], &ip_bin[3]);
        for(i=0; i<4; i++) {
            dec = ip_dec[i];
            bin = bin_to_dec(i);
            if(dec == bin) {m++;}
        }

        if(m==4) {
            printf("Case %d: Yes\n", j);
        }else{
            printf("Case %d: No\n", j);
        }

    }

return 0;
}
