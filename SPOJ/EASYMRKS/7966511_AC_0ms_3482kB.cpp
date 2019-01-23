#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int t, n, k, i, num, ans;

    scanf("%d", &t);

    for(i=0; i<t; i++) {
        scanf("%d %d", &n, &k);
        ans = (n+1) * k;
        while(n--) {
            scanf("%d", &num);
            ans -= num;
        }
        printf("Case %d: %d\n", i+1, ans);

    }

return 0;
}
