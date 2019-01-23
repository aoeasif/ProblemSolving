#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int SZ = 1e3+10;
char arr[SZ][SZ];

int main() {
    int t, n, i, j, pos, mirror;

    scanf("%d", &t);
    while(t--) {
        mirror=0;
        scanf("%d", &n);
        for(i=0; i<n; i++) {
            scanf("%s", &arr[i]);
        }
        for(i=n-1; i>=0; i--) {
            for(j=n-1; j>=0; j--) {
                if(arr[j][i] == '#') break;
                if(arr[j][i] == '.'){
                    if(i+1==n){mirror++;arr[j][i] = '*';continue;}
                    pos = i+1;
                    while(pos<n) {
                        if(arr[j][pos] == '#') break;
                        else if(arr[j][pos] == '*') {
                            mirror++;
                            arr[j][i] = '*';
                            break;
                        }else{
                            pos++;
                        }
                    }
                    if(pos==n) {
                        mirror++;
                        arr[j][i] = '*';
                    }
                }
            }
        }
        printf("%d\n", mirror);
        memset(arr, '\0', SZ*SZ);
    }


return 0;
}
