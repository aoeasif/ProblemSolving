#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    int c, n=20, prob, temp;

    scanf("%d", &c);
    while(c--) {
        temp = 0;
        scanf("%d", &prob);
        if(prob == 20) {
            temp = 10;
            prob = 10;
            printf("%d %d\n", temp, prob);
            continue;
        }
        temp = prob % 10;
        prob -= temp;
        printf("%d %d\n", temp, prob);
    }

return 0;
}


