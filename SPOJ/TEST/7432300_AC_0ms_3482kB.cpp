#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;

    while(scanf("%d", &a)){
        if(a==42)
            break;
        printf("%d\n", a);
    }

return 0;
}
