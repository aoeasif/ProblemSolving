#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, p, a = 0, mx = -1, mn = -1;

    scanf("%d", &n);

    while(n--) {
        scanf("%d", &p);
        if(mx == -1 && mn == -1) {
            mx = p;
            mn = p;
        }else if(p > mx) {
            mx = p;
            a++;
        }else if(p < mn) {
            mn = p;
            a++;
        }
    }
    printf("%d\n", a);
return 0;
}
