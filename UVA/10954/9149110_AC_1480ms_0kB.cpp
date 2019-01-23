#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int SZ = 5e3+10;
const int MAX = 100000+10;
int numArray[SZ];

int main() {
    int n, num, i, cost;

    while(scanf("%d", &n)) {
        if(n==0) break;
        for(i=0; i<n; i++) {
            scanf("%d", &numArray[i]);
        }
        cost = 0;
        for(i=0; i<n-1; i++) {
            sort(numArray, numArray+n);
            numArray[i+1] = numArray[i] + numArray[i+1];
            numArray[i] = 0;
            cost += numArray[i+1];

        }
        printf("%d\n", cost);
        memset(numArray, 0, SZ);
    }
    return 0;
}