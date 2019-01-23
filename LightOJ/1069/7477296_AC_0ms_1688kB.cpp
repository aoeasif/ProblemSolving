#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int i, cs, my_pos, lift_pos, step, time;

    scanf("%d", &cs);
    for(i=0; i<cs; i++) {
        scanf("%d %d", &my_pos, &lift_pos);
        step = abs(my_pos-lift_pos);
        step += my_pos;
        time = (step*4)+19;
        printf("Case %d: %d\n", i+1, time);
    }
return 0;
}
