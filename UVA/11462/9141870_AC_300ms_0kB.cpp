#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> ageVector;

int main() {
    int n, age, i;
    unsigned int itr;

    while(scanf("%d", &n)) {
        if(n == 0) break;
        for(i=0; i<n; i++) {
            scanf("%d", &age);
            ageVector.push_back(age);
        }

        sort(ageVector.begin(), ageVector.begin()+n);

        for(itr=0; itr<ageVector.size()-1; itr++) {
            printf("%d ", ageVector[itr]);
        }
        printf("%d\n", ageVector[itr]);
        ageVector.clear();
    }

    return 0;
}
