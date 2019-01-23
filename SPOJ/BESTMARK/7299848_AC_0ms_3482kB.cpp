#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int t, n, i, q1, q2, q3, mx=0, temp, cnt=0;

    scanf("%d", &t);
    while(t--) {
        cnt = mx = 0;
        scanf("%d", &n);
        for(i=0; i<n; i++) {
            scanf("%d %d %d", &q1, &q2, &q3);
            temp = q1+q2+q3;
            if(temp == mx) {
                cnt++;
            }
            if(temp > mx) {
                mx = temp;
                cnt=1;
            }
        }

        printf("%d %d\n", mx, cnt);
    }

return 0;
}
