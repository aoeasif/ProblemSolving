#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
    char ch[6];
    int n=1;

    while(scanf("%s", ch)) {
        if(strcmp(ch, "*") == 0) break;
        if(strcmp(ch, "Umrah") == 0) {
            printf("Case %d: Hajj-e-Asghar\n", n);n++;

        }else{
            printf("Case %d: Hajj-e-Akbar\n", n);n++;
        }

    }
return 0;
}