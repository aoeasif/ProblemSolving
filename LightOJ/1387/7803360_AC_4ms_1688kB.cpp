#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int SZ = 10;
char opt[SZ];

int main() {
   int i, t, n, k, d;
   char iFalse, ch;

   scanf("%d", &t);

   for(i=1; i<=t; i++) {
        scanf("%d%c", &n, &iFalse);
        d = 0;
        printf("Case %d:\n", i);
        while(n--) {
            ch = 0;
            scanf("%c %s",&ch, opt);
            if(ch == 'd') {
                scanf("%d%c", &k, &iFalse);
                d += k;
            }else if(ch == 'r') {
                printf("%d\n", d);
                scanf("%c", &iFalse);
            }else{
                printf("option selected: %c\n", ch);
            }
        }
   }
return 0;
}
