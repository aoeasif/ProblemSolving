#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int SZ = 100+10;
char arr[SZ];

int main() {
    int i, j=0, cnt=0;

    scanf("%s", arr);
    for(i='a'; i<='z'; i++) {
        for(j=0; j<strlen(arr); j++) {
            if(arr[j] == i) {
                cnt++;
                break;
            }
        }
    }

    if(cnt % 2 == 0) {
        printf("CHAT WITH HER!\n");
    }else{
        printf("IGNORE HIM!\n");
    }
return 0;
}
