#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);

   for(i=2; i<m; i++) {
        if(m%i == 0) break;
    }

    if(i != m) {
        printf("NO\n");
    }else{
        for(i=n+1; i<m; i++) {
            for(j=2; j<i; j++) {
                if(i%j == 0) break;

            }
            if(j == i) break;
        }
        if(i == m)
            printf("YES\n");
        else
            printf("NO\n");
    }


return 0;
}
