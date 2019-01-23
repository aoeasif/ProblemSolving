#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int a, b, n1, n2, n3, c;

    while(scanf("%d %d", &a, &b)) {
        if(a == 0 && b == 0) break;
        c = 0;
        n3 = 0;
        while(a > 0 || b > 0) {
            n1 = a%10;
            n2 = b%10;
            n3 = n1+n2+n3;
            if(n3 > 9) {c++;n3 = 1;}else{n3 = 0;}
            a/=10;
            b/=10;
        }
        if(c==0) printf("No carry operation.\n");
        else if(c==1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n", c);
    }
return 0;
}
