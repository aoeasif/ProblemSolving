#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int SZ = 20;
int arr[SZ];

int main() {
    int n, degit, idx, i, dec;
    scanf("%d", &n);
    idx = 0;
    while(n>0) {
        degit = n % 10;
        if(degit == 4) {
            arr[idx++] = 0;
        }else{
            arr[idx++] = 1;
        }
        n /= 10;
    }
    arr[idx] = 1;
    degit = 1;
    dec = 0;
    for(i=0; i<=idx; i++) {
        dec = dec + arr[i] * degit;
        degit *= 2;
    }
    printf("%d\n", dec-1);
    return 0;
}