#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    int i, j, m[5][5], mv;

    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            scanf("%d", &m[i][j]);
            if(m[i][j] == 1) {
                break;
            }
        }
        if(m[i][j] == 1){
            i++;
            j++;
            break;
        }
    }


    mv = int(abs(i-3)) + int(abs(j-3));
    printf("%d\n", mv);
return 0;
}

