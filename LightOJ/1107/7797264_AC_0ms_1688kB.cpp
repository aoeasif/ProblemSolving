#include <iostream>
#include <cstdio>
using namespace std;

int ABS(int x) {
    return (x<0) ? x*(-1) : x;
}

int main() {
    int i, t, x1, x2, y1, y2, m, x, y;

    scanf("%d", &t);

    for(i=1; i<=t; i++) {
        printf("Case %d:\n", i);
        scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &m);
        while(m--) {
            scanf("%d %d", &x, &y);
            if((x > x1 && x < x2) && (y > y1 && y < y2)) {
                printf("Yes\n");
            }else{
                printf("No\n");
            }

        }
    }
return 0;
}
