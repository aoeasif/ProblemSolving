#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int SZ = 100+10;
char word[SZ];

char tolower(char x) {
    return (x<97) ? x+32 : x;
}

int main() {
    int i, len;
    char c;

    scanf("%s", word);
    len = strlen(word);

    for(i=0; i<len; i++) {
        c = tolower(word[i]);
        if(c=='a' || c=='e' || c=='i' || c=='o'|| c=='u' || c=='y') {
            continue;
        }else{
            printf(".%c", c);
        }
    }

    printf("\n");

return 0;
}
