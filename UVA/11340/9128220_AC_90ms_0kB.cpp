#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;

int main() {
    int n, k, m, cent, paid_cent;
    char letter, iFalse, article[10001];
    double paid_cent_dollar;
    map<char, int> letterMap;
    map<char, int>::iterator itr;

    scanf("%d", &n);

    while(n--) {
        scanf("%d%c", &k, &iFalse);

        for(int i=0; i<k; i++) {
            scanf("%c%c%d%c", &letter, &iFalse, &cent, &iFalse);
//            printf("%c is value of %d\n", letter, cent);
            letterMap.insert(pair<char, int>(letter, cent));
        }

        scanf("%d%c", &m, &iFalse);
        paid_cent = 0;
        while(m--) {
            gets(article);
            for(int i=0; i<strlen(article); i++) {
                itr = letterMap.find(article[i]);
                if(itr != letterMap.end()) {
//                    printf("cent: %d\n", itr->second);
                    paid_cent += itr->second;
//                    printf("total cent: %d\n", paid_cent);
                }
            }
        }

        paid_cent_dollar = (double)paid_cent/100;
        printf("%0.2lf$\n", paid_cent_dollar);
        letterMap = map<char, int>();

    }
    return 0;
}