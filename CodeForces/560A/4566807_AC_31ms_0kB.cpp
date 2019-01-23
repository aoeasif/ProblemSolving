#include <cstdio>

using namespace std;

int main() {
    int n, index = 0;
    long int num;

    scanf("%d", &n);
    while(n--) {
        scanf("%ld", &num);
        if(num == 1) {index=1;}
    }

    if(index == 1)
        printf("-1");
    else
        printf("1");
return 0;
}
