#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i, cs, x, y, m, axis[4];

    scanf("%d", &cs);
    for(i=0; i<cs; i++) {
        scanf("%d %d %d %d %d", &axis[0], &axis[1], &axis[2], &axis[3], &m);
        printf("Case %d:\n", i+1);
        while(m--) {
            scanf("%d %d", &x, &y);
            if(x>=axis[0] && x<=axis[2] && y>=axis[1] && y<=axis[3]) {
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }
    }
return 0;
}
