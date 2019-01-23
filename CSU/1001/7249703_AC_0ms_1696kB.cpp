#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    double a, b;

    while(scanf("%lf %lf", &a, &b) != EOF) {
        printf("%.4lf\n", a+b);
    }

return 0;
}


