#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i, n, t, ans = 0;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &t);
        if(t-ans > 15) break;
        ans = t;
    }


    if(ans + 15 >= 90) ans = 90;
    else ans += 15;

    printf("%d\n", ans);

return 0;
}