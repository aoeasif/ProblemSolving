#include <iostream>
#include <cstdio>

int main() {
    int n, i, cnt;
    while(scanf("%d", &n) != EOF) {
        i=0, cnt = 0;
        while(true) {
            i = ((i*10) + 1) % n;
            cnt++;
            if(i == 0) break;

        }
        printf("%d\n", cnt);
    }
return 0;
}
