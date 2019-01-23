#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n,i,cnt=0;
    char c,color[60];

    scanf("%d%c", &n, &c);
    for(i=0; i<n; i++) {
        scanf("%c", &color[i]);
    }

    for(i=1; i<n; i++) {
        if(color[i] == color[i-1]) {
            cnt++;
        }

    }

    printf("%d\n", cnt);
return 0;
}

