#include <iostream>
#include <cstdio>
using namespace std;

const int SZ = 50+10;
char arr[SZ];

int main() {
    int i, j, line, time;
    char iFalse;

    scanf("%d %d%c", &line, &time, &iFalse);
    scanf("%s", arr);

    for(i=0; i<time; i++) {
        for(j=1; j<line; j++) {
            if(arr[j] == 'G' && arr[j-1] == 'B') {
                swap(arr[j], arr[j-1]);
                j++;
            }
        }
    }

    printf("%s\n", arr);

return 0;
}
