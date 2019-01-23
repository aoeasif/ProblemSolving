#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int SZ = 100+10;
char arr[SZ], hello[6] = {'h', 'e', 'l', 'l', 'o'};


int main() {
    int i, j = 0, flag = 0;
    scanf("%s", arr);
    for(i=0; i<strlen(arr); i++) {
        if(arr[i] == hello[j]) {
            if(arr[i] == 'l' && j==2) {
            }else{
                while(arr[++i] == hello[j]);
                i--;
            }
            j++;
        }else{
            continue;
        }
    }

    if(j==5) {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
return 0;
}
