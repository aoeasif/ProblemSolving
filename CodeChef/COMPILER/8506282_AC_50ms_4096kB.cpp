#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int SZ = 1e6+10;
char arr[SZ];


int main() {
    int t, i, op, cp, mx;
    scanf("%d", &t);
    while(t--) {
        scanf("%s", arr);
        op = mx = 0;
        for(i=0; i<strlen(arr); i++) {
            if(arr[i] == '<') {
                op++;
            }else{
                op--;
            }
            if(op==0) mx = i+1;
            else if(op<0) break;
        }
        printf("%d\n", mx);
        memset(arr, '\0', SZ);
    }
return 0;
}
