#include <iostream>
#include <cstdio>
using namespace std;

double avg_best_two(int ct1, int ct2, int ct3) {
    int mx1, mx2;
    if(ct1 > ct2) {
            mx1 = ct1;
            if(ct2 > ct3) {
                mx2 = ct2;
            }else{
                mx2 = ct3;
            }
        }else{
            mx1 = ct2;
            if(ct1 > ct3) {
                mx2 = ct1;
            }else{
                mx2 = ct3;
            }
        }

    return (double)(mx1+mx2)/2;
}

int main() {
    int i, cs, t1, t2, f, a, ct1, ct2, ct3;
    double avg_ct, res;
    char grade;

    scanf("%d", &cs);
    for(i=0; i<cs; i++) {
        scanf("%d %d %d %d %d %d %d", &t1, &t2, &f, &a, &ct1, &ct2, &ct3);

        avg_ct = avg_best_two(ct1, ct2, ct3);
        res = t1 + t2 + f + a + avg_ct;

        if(res >= 90) {
            grade = 'A';
        }else if(res >= 80) {
            grade = 'B';
        }else if(res >= 70) {
            grade = 'C';
        }else if(res >= 60) {
            grade = 'D';
        }else{
            grade = 'F';
        }

        printf("Case %d: %c\n", i+1, grade);

    }
return 0;
}
