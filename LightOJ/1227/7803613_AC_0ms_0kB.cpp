#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int i, j, t, n, p, q, cnt = 0, w = 0, ew;

    scanf("%d", &t);

    for(i=1; i<=t; i++) {
        w = 0;
        cnt = 0;
        scanf("%d %d %d", &n, &p, &q);
        for(j=0; j<n; j++) {
            scanf("%d", &ew);
            if(w+ew <= q && cnt+1 <= p) {
                w += ew;
                cnt++;
            }
        }
        printf("Case %d: %d\n", i, cnt);
    }

return 0;
}
