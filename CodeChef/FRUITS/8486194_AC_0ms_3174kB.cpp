#include <iostream>
#include <cstdio>
using namespace std;

int ABS(int x) {return (x>0)?x:x*(-1);}

int main(){
    int t, n, m, k, ans;

    scanf("%d", &t);
    while(t--) {
        scanf("%d %d %d", &n, &m, &k);
        ans = ABS(n-m);
        if(ans <= k)
            ans = 0;
        else
            ans -= k;
        printf("%d\n", ans);
    }

return 0;
}
