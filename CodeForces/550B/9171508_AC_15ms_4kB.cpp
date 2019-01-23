#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n, l, r, x, i, k, cost, min, max, cnt;
    vector < int > c;

    scanf("%d %d %d %d", &n, &l, &r, &x);
    for(i=0; i<n; i++) {
        scanf("%d", &cost);
        c.push_back( cost);
    }

    cnt = 0;
    for(i=3; i<(1<<n); i++) {
        cost = 0;
        min = 0;
        max = 0;
//        cout << i << endl;
        for(k=0; k<n; k++) {
            if(i & (1<<k)) {
                cost += c[k];
                if(min == 0 && max == 0) min = max = c[k];
                else if(c[k] >= max) max = c[k];
                else if(c[k] <= min) min = c[k];
//                cout << "min: " << min << " max: " << max << " c[k] " << c[k] << endl;
            }
        }
        if(cost >= l && cost <= r && (max-min)>= x) {cnt++;}
    }
    printf("%d\n", cnt);

    return 0;
}