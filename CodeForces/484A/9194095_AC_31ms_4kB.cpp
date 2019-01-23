#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int main() {
    int n;
    long long int l, r, i, bitshift;

    scanf("%d", &n);
    while(n--) {
        scanf("%lld %lld", &l, &r);

        bitshift = 1;
        for(i = 0; i < 63; i++){
            if((l | bitshift) > r) break;
            l = l | bitshift;
            bitshift = bitshift << 1;
        }

        printf("%lld\n", l);

    }


    return 0;
}