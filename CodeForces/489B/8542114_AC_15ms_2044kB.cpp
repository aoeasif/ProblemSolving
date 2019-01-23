#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int SZ = 1e2+10;
int a[SZ], b[SZ];

int DIFF(int x, int y) {
    return (x>y) ? x-y : y-x;
}

int main() {
    int n, m, i, j, d, cnt;

    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    for(i=0; i<m; i++) scanf("%d", &b[i]);
    sort(a, a+n);
    sort(b, b+m);

    cnt = i = j = 0;
    while(i<n && j<m) {
        d = DIFF(a[i], b[j]);
        if(d <= 1) {
            cnt++;
            i++;
            j++;
        }else if(a[i] > b[j]) {
            j++;
        }else{
            i++;
        }
    }
    printf("%d\n", cnt);

return 0;
}
