#include <iostream>
#include <cstdio>

using namespace std;

int GCD(int i, int j) {
    int rem = -1;
    while(rem != 0) {
        rem = j % i;
        j = i;
        i = rem;
    }

    return j;
}

int main() {
    int n, i, j, G;
    while(scanf("%d", &n)) {
        if(n == 0) break;
        G=0;
        for(i=1;i<n;i++) {
            for(j=i+1;j<=n;j++) {
                G+=GCD(i,j);
            }
        }
        printf("%d\n", G);

    }

return 0;
}

