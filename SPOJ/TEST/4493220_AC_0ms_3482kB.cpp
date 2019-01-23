#include <cstdio>

int main() {
    int num, flag = 0;

    while(scanf("%d", &num)) {
        if(num == 42) {
            break;
        }
        if(flag == 0) {
            printf("%d\n", num);
        }
    }
return 0;
}
