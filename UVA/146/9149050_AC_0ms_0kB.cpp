#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int SZ = 60;
char ch[SZ];

int main() {

    while(scanf("%s", ch)) {
        if(ch[0] == '#') break;
        if(next_permutation(ch,ch+strlen(ch))){
            printf("%s\n", ch);
        }else{
            printf("No Successor\n");
        }

        memset(ch, '\0', SZ);
    }
    return 0;
}