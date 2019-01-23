#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, a, b, sum = 0, mx = 0;

    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &a, &b);
        sum = (sum-a) + b;
        if(sum > mx) mx = sum;
    }
    printf("%d\n", mx);
return 0;
}
