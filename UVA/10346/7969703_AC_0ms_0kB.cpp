#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, k, b, ans, nc, c;

    while(scanf("%d", &n) != EOF) {
        scanf("%d", &k);
        b = n;
        ans = n;
        while(b>=k) {
           ans +=b/k;
           c = b%k;
           b = (b/k)+c;

        }
        printf("%d\n", ans);
    }
return 0;
}
