#include <iostream>
#include <cstdio>
using namespace std;

const int SZ = 2e3+10;
int bourles[SZ];

int MAX(int x, int y) {
    return (x>y) ? x : y;
}

int main() {
    int n, b, i, j, mx, m, rem, buy;

    scanf("%d %d", &n, &b);

    for(i=0; i<n; i++) {
        scanf("%d", &bourles[i]);
    }

    mx = b;
    for(i=0; i<n; i++) {
        m = b / bourles[i];
        if(m==0) continue;
        rem = b%bourles[i]; // remain

        for(j=i+1; j<n; j++) {
            buy = m * bourles[j];
            mx = MAX(buy+rem,mx);
        }
    }

    printf("%d\n", mx);

return 0;
}
