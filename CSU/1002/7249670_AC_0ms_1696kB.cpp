#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    int64_t a, b;

    while(cin>> a >> b) {
        if(a == 0 && b == 0) break;
        cout << a+b << endl;
    }

return 0;
}


