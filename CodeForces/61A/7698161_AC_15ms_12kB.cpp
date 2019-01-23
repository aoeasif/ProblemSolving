#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int SZ = 100+10;
char num1[SZ], num2[SZ];

int main() {
    int i;
    char iFalse;

    scanf("%s %s", num1, num2);
    for(i=0; i<strlen(num1); i++) {
        if(num1[i] == num2[i]) {
            printf("0");
        }else{
            printf("1");
        }
    }
    printf("\n");

return 0;
}
