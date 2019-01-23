#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int a, b, d;
    while(scanf("%d %d", &a, &b) != EOF) {
        d = 0;
        a += b;
        while(a > 0) {
            d++;a/=10;
        }
        printf("%d\n", d);
    }

return 0;
}
