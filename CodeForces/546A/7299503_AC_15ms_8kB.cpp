#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int k, n, w, b;

    scanf("%d %d %d", &k, &n, &w);
    w = (k*(w*(w+1)))/2;

    if(n<w) {
        printf("%d\n", w-n);
    }else{
        printf("0");
    }

return 0;
}

