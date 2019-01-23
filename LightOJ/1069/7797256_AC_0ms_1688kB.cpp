#include <iostream>
#include <cstdio>
using namespace std;

int ABS(int x) {
    return (x<0) ? x*(-1) : x;
}

int main() {
    int i, t, me, lift, time;

    scanf("%d", &t);

    for(i=1; i<=t; i++) {
        scanf("%d %d", &me, &lift);
        time = ABS(me-lift) + me;
        time = time * 4 + 19;
        printf("Case %d: %d\n", i, time);
    }
return 0;
}
