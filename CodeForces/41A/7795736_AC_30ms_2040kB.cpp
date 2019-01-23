#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int SZ = 100+10;
char word1[SZ], word2[SZ];

int main() {
    int i, len1, len2;

    scanf("%s %s", word1, word2);
    len1 = strlen(word1);
    len2 = strlen(word2);
    if(len1 == len2) {
        for(i = 0; i < len1; i++) {
            if(word1[i] != word2[--len2]) break;
        }
    }
    if(i==len1) {
        printf("YES\n");
    }else{
        printf("NO\n");
    }

return 0;
}
