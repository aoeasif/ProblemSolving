#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int SZ1 = 100+10;
const int SZ2 = 122+10;
char arr1[SZ1];
int arr2[SZ2];

int main() {
    int i, temp, cnt=0;

    memset(arr2, 0, sizeof(arr2));
    scanf("%s", arr1);
    for(i=0; i<strlen(arr1); i++) {
        temp = arr1[i];
        arr2[temp]++;
    }

    for(i=0; i<SZ2; i++) {
        if(arr2[i] > 0) {
            cnt++;
        }
    }

    if(cnt % 2 == 0) {
        printf("CHAT WITH HER!\n");
    }else{
        printf("IGNORE HIM!\n");
    }
return 0;
}
