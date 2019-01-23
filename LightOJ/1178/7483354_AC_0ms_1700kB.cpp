#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double triangle_area(double a, double b, double c) {
    double s = .5*(a+b+c);
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

double triangle_height(double base, double area) {
    return (area*2)/base;
}

int main() {
    int cs, i;
    double a, b, c, d, base, height, area;

    scanf("%d", &cs);
    for(i=0; i<cs; i++) {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        base = abs(a-c);
        area = triangle_area(b,d,base);
        height = triangle_height(base, area);
        area = .5*(a+c)*height;
        printf("Case %d: %lf\n", i+1, area);
    }
return 0;
}
