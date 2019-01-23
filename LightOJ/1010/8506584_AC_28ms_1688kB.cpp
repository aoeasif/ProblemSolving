#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
 
int main() {
    int t, i, m, n, mod_val, ans, temp;
 
    scanf("%d", &t);
 
    for(i=0; i<t; i++) {
        scanf("%d %d", &m, &n);
 
        if(m == 1 || n == 1) {
            ans = m*n;
        }else if(m == 2 || n == 2){
            if(n == 2) {
                n = m;
                m = 2;
            }
            mod_val = n % 4;
            if(mod_val == 0 || mod_val == 2) {
                ans = n+mod_val;
            }else{
                ans = n+1;
            }
        }else{
            ans = ceil((m*n)/2.0);
        }
 
        printf("Case %d: %d\n", i+1, ans);
 
    }
return 0;
}