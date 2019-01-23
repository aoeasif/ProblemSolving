#include <iostream>
#include <cstdio>
using namespace std;

int lucky_number(int64_t n) {
    if(n == 0) return 0;
    int temp = n % 10;
    n /= 10;
    if(temp == 4 || temp == 7) {
        return 1+lucky_number(n);
    }
    return 0+lucky_number(n);
}

int main() {
    int64_t num;
    int cnt = 0;

    scanf("%I64d", &num);
    cnt = lucky_number(num);
    if(cnt == 4 || cnt == 7) {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
return 0;
}
