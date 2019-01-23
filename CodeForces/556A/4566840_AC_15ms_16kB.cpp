#include <cstdio>

using namespace std;

const int SZ = 2E5+10;
char str[SZ];


int main() {
    int i, n, z = 0, o = 0, temp;
    char iFalse;

    scanf("%d%c", &n, &iFalse);
    scanf("%s", str);

    for(i = 0; i < n; i++) {
        if(str[i] == '0') {
            z++;
        }else{
            o++;
        }
    }

    if(z == o) {
        printf("0");
    }else{
        if(z > o) {printf("%d", (z-o));}
        else {printf("%d", (o-z));}
    }

return 0;
}
