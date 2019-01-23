#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> v;

void SWAP(int i, int i1) {
    int num = v[i];
    v[i] = v[i1];
    v[i1] = num;
}


int main() {
    int t, n, num, min;
    bool flag;
    unsigned int i;


    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(i=0; i<n; i++) {
            scanf("%d", &num);
            v.push_back(num);
        }

        if(next_permutation(v.begin(), v.end())) {
            for(i=0; i<v.size(); i++) printf("%d", v[i]);
            printf("\n");
        }else{
            printf("-1\n");
        }
        v.clear();
    }
    return 0;
}
