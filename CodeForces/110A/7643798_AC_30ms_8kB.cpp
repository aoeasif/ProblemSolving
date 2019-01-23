#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	uint64_t n, cnt=0;
	cin >> n;
	while(n>0) {
		if((n%10 == 4) || (n%10 == 7)) {
			cnt++;
		}
		n = n/10;
	}
	if(cnt==4 || cnt==7) {
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}