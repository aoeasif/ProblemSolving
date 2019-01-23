#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    long long hsmot, opnt;

    while(scanf("%lld %lld", &hsmot, &opnt) != EOF) {
        if(hsmot>opnt) {
            printf("%lld\n", hsmot-opnt);
        }else{
            printf("%lld\n", opnt-hsmot);
        }

    }
return 0;
}
