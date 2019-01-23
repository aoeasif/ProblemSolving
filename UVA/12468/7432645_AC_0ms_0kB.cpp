#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b, press, temp, mx, mn;

    while(scanf("%d %d", &a, &b)) {
        if(a==-1)
            break;
        if(a>b) {
            mx = a;
            mn = b;
        }else{
            mx = b;
            mn = a;
        }

        if(mx-mn>50) {
            temp = 100-mx;
            press = temp + mn;
        }else{
            press = mx - mn;
        }

        printf("%d\n", press);
    }

return 0;
}
