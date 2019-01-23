#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, g, l;

    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &g, &l);
        if(l%g == 0) {
            printf("%d %d\n", g, l);
        }else{
            printf("-1\n");
        }
    }

return 0;
}

