#include <cstdio>

using namespace std;

const int SZ = 50 + 10;
int arr[SZ];

int main() {
    int i, j, n, l, temp, index = 0, s = 0;

    scanf("%d", &n);

    while(n--) {
        scanf("%d", &l);
        for(i = 0; i < l; i++) {
            scanf("%d", &arr[index++]);
        }

        for(i = 0; i < l; i++) {
            for(j = i+1; j < l; j++) {
                if(arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    s++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", s);
        s = 0;
        index = 0;
        arr[0] = 0;
    }
return 0;
}
