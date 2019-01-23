#include <iostream>
#include <cstdio>
using namespace std;

long long int remind_res[100] = {0, 1, 2};

int main() {
	int n;
	while(true) {
		scanf("%d", &n);
		if(n == 0) break;
		for(int i=3; i<=n; i++) remind_res[i] = remind_res[i-1] + remind_res[i-2];
		printf("%lld\n", remind_res[n]);
	}
	return 0;
}