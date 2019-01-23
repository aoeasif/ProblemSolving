#include <iostream>
#include <cstdio>
using namespace std;

int r, c;

int findpath(int i, int j) {
    int ans = 0;
    if(i==r && j==c) return 1;
    if(i < r) ans += findpath(i+1, j);
    if(j < c) ans += findpath(i, j+1);
    return ans;

}

int main() {
    int t, t_path;

    scanf("%d", &t);

    while(t--) {
        scanf("%d %d", &r, &c);
        t_path = findpath(1, 1);
        printf("%d\n", t_path);
    }
return 0;
}
