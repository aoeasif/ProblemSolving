#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, i, j, k, key = 1;

    scanf("%d", &n);

    for(i=1; i<n; i+=2) {
        for(j=i; j<n-1; j+=2) {
            printf("*");
        }

        for(j=0; j<i; j++) {
            printf("D");
        }

        for(j=i; j<n-1; j+=2) {
            printf("*");
        }
        printf("\n");
    }

    for(i=0; i<n; i++) {
        printf("D");
    }
    printf("\n");

    for(i=n-2; i>0; i-=2) {
        for(j=i; j<n-1; j+=2) {
            printf("*");
        }

        for(j=0; j<i; j++) {
            printf("D");
        }

        for(j=i; j<n-1; j+=2) {
            printf("*");
        }
        printf("\n");
    }

return 0;
}

