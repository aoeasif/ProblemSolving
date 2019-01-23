#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    long long int n, res;

    while(true) {
        scanf("%lld", &n);
        if(n < 0) break;
        else{
            res = n * (n + 1);
            res /= 2;
            res += 1;
        }
        printf("%lld\n", res);

    }
    return 0;
}