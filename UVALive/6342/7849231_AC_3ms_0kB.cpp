#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int SZ = 20;
char s[SZ];

int main() {
    int t, len, i, j, flag = 0;

    scanf("%d", &t);
    while(t--) {
        scanf("%s", s);
        len = strlen(s);
        j = len;
        for(i=0; i<len; i++) {

            if(s[--j] != s[i]) {
                break;
            }
        }

        if(i == len) {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

return 0;
}
