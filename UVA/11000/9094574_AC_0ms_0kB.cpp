#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    long long int n, male, female, f, m;
    while(true) {
        scanf("%lld", &n);
        if(n == -1) break;

        female = 1;
        male = 0;

        for(int i=1; i<=n; i++) {
            m = male;
            f = female - 1;
            female += male;
            male += female;
            female -= f;
            male -= m;
        }

        printf("%lld %lld\n", male, male+female);
    }

    return 0;
}