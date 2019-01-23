#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

const double pi = acos(-1.0);
const double eps = 1e-9;

double new_radius(int r1, int r2, int h, int p) {
    double temp = (double)p/h;
    return r2-(temp*(r2-r1));
}

int main() {
    int i, cs, r1, r2, h, p;
    double vol, r3;

    scanf("%d", &cs);
    for(i=0; i<cs; i++) {
        scanf("%d %d %d %d", &r1, &r2, &h, &p);
        if(h != p) {
            r3 = new_radius(r1, r2, h, p);
            vol = ((pi*p)/3.0) * (pow(r3,2) + r3*r2 + pow(r2,2));
        }else{
            vol = ((pi*p)/3.0) * (pow(r1,2) + r1*r2 + pow(r2,2));
        }
        printf("Case %d: %.7lf\n", i+1, vol+eps);
    }
return 0;
}
