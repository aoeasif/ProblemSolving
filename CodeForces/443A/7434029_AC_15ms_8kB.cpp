#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int SZ = 1000+10;
char Arr[SZ];

int main() {
    int i, j, cnt = 0;
    char a;
    scanf("%[^\n]s", Arr);
    for(j='a'; j<='z'; j++) {
        for(i=0; i<strlen(Arr); i++) {
            if(Arr[i] == j) {
                cnt++;
                break;
            }
        }
    }

    printf("%d\n", cnt);

return 0;
}
