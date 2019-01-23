#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, a, i, prev, prev_cnt, cnt;

    scanf("%d", &n);
    scanf("%d", &prev);
    cnt = 1;
    prev_cnt = 0;
    for(i=1; i<n; i++) {
        scanf("%d", &a);
        if(a > prev) {
            cnt++;
        }else{
            if(cnt > prev_cnt) prev_cnt = cnt;
            cnt = 1;
        }
        prev = a;
    }

    if(prev_cnt > cnt) cnt = prev_cnt;
    printf("%d\n", cnt);
return 0;
}