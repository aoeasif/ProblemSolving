#include <iostream>
#include <cstdio>
using namespace std;

const int SZ = 60;
char s[SZ];

int main() {
	int i, n, cnt=0;
	char c, iFalse;
	
	scanf("%d%c", &n, &iFalse);
	
	for(i=0; i<n; i++) {
		scanf("%c", &s[i]);	
	}
	
	for(i=0; i<n-1; i++) {
		if(s[i] == s[i+1]) {
			cnt++;
		}
	}
	
	printf("%d\n", cnt);
	return 0;
}