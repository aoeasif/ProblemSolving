#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

const double PI = 3.14159265;

double angle(double a, double b, double c) {
    double temp = pow(a,2) - (pow(b,2) + pow(c,2));
    return acos(temp / ( -2*b*c));
}

double triangle_area(double a, double b, double angle) {
    return .5*a*b*sin(angle);
}

double sector(double r, double angle) {
    return .5*pow(r,2)*angle;
}

int main() {
    int cs, i;
    double r1, r2, r3, l1, l2, l3, a, b, c, area;

    scanf("%d", &cs);
    for(i=0; i<cs; i++) {
        scanf("%lf %lf %lf", &r1, &r2, &r3);
        l1 = r1+r2;
        l2 = r2+r3;
        l3 = r3+r1;
        a = angle(l1, l2, l3);
        b = angle(l2, l1, l3);
        c = angle(l3, l1, l2);
        area = triangle_area(l2, l3, a);
        l1 = sector(r3, a);
        l2 = sector(r1, b);
        l3 = sector(r2, c);
        area -= (l1+l2+l3);

        printf("Case %d: %.17lf\n", i+1, area);
    }

return 0;
}
