#include <iostream>
#include <cstdio>
using namespace std;

const int SZ = 100+10;
int Arr[SZ];

int main() {
    int n,i,ev_indx=0, od_indx=0, ev=0, od=0;

    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &Arr[i]);
    }

    for(i=0; i<n; i++) {
        if(Arr[i]%2==0) {
            ev++;
            ev_indx=i+1;
        }else{
            od++;
            od_indx=i+1;
        }

    }

    if(ev<od) {
        printf("%d\n", ev_indx);
    }else{
        printf("%d\n", od_indx);
    }
    return 0;
}
