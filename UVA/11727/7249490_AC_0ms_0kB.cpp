#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    int n, a, b, c, i, res;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(a>b) {
            if(a>c) {
                (c>b)? res=c : res=b;
            }else{
                res = a;
            }
        }else{
            if(b>c){
                (c>a)? res=c : res=a;
            }else{
                res = b;
            }
        }

        printf("Case %d: %d\n", i+1, res);
    }

return 0;
}


