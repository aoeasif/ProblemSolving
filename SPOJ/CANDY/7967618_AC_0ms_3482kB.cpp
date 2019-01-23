#include <iostream>
#include <cstdio>
using namespace std;

const int SZ = 1e4+10;
int arr[SZ];

int main() {
    int i, n, k, ans, avg, cnt;

    while(scanf("%d", &n)) {
        if(n == (-1)) break;
        int sum = 0;
        for(i=0; i<n; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        avg = sum/n;
        cnt = 0;
        for(i=0; i<n; i++) {
            ans = avg - arr[i];
            if(ans > 0) cnt += ans;
            arr[i] = arr[i] + ans;
        }

        ans = 0;
        for(i=0; i<n; i++) {
            ans += arr[i];
        }

        if(ans == sum) printf("%d\n", cnt);
        else printf("-1\n");

    }
return 0;
}