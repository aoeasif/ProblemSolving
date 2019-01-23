#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int SZ = 1e3+10;
int card[SZ];

int MAX(int x, int y) {
    return (x>=y) ? x : y;
}

int main() {
    int n, i, j, s, d, turn, pick;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &card[i]);
    }
    turn = s = d = i = 0;
    j = n-1;
    while(i<=j) {
        if(card[i] >= card[j]) {
            pick = card[i];
            i++;
        }else{
            pick = card[j];
            j--;
        }

        if(turn == 0) {
            s += pick;
            turn = 1;
        }else{
            d += pick;
            turn = 0;
        }
    }

    printf("%d %d\n", s, d);

return 0;
}
