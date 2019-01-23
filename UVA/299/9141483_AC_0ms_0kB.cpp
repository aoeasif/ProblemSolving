#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

vector <int> carriagesVector;

int main() {
    int n, l, c, i, j, cnt, temp;

    scanf("%d", &n);
    while(n--) {
        scanf("%d", &l);

        for(int i = 0; i < l; i++) {
            scanf("%d", &c);
            carriagesVector.push_back(c);
        }

        cnt = 0;
        for(i = 0; i < l; i++) {
            for(j = i; j < l; j++) {
                if(carriagesVector[i] > carriagesVector[j]) {
                    temp = carriagesVector[j];
                    carriagesVector[j] = carriagesVector[i];
                    carriagesVector[i] = temp;
                    cnt++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", cnt);
        carriagesVector.clear();
    }

    return 0;
}
