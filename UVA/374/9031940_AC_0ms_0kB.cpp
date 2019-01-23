#include <iostream>
#include <cstdio>
using namespace std;

int bigMod(int base, int power, int mod) {
    if(power == 0) return 1;
    if(power % 2 == 1) {
        int part1 = base % mod;
        int part2 = bigMod(base, power-1, mod);
        return (part1 * part2) % mod;               ;
    }
    int eq_part = bigMod(base, power/2, mod);
    return (eq_part * eq_part) % mod;
}

int main() {
    int b, p, m;
    while(scanf("%d %d %d", &b, &p, &m) != EOF) {
        int res = bigMod(b, p, m);
        printf("%d\n", res);
    }
    return 0;
}